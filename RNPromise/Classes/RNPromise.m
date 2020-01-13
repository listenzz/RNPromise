#import "RNPromise.h"

@implementation RNPromise

- (instancetype)initWithResolveBlock:(RCTPromiseResolveBlock)resolve rejectBlock:(RCTPromiseRejectBlock)reject {
    if (self = [super init]) {
        _resolve = resolve;
        _reject = reject;
    }
    return self;
}

+ (instancetype)promiseWithResolveBlock:(RCTPromiseResolveBlock)resolve rejectBlock:(RCTPromiseRejectBlock)reject {
    return [[RNPromise alloc] initWithResolveBlock:resolve rejectBlock:reject];
}

@end
