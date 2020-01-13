#import <React/RCTBridgeModule.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNPromise : NSObject

@property(nonatomic, copy, readonly) RCTPromiseResolveBlock resolve;

@property(nonatomic, copy, readonly) RCTPromiseRejectBlock reject;

- (instancetype)initWithResolveBlock:(RCTPromiseResolveBlock)resolve rejectBlock:(RCTPromiseRejectBlock)reject;

+ (instancetype)promiseWithResolveBlock:(RCTPromiseResolveBlock)resolve rejectBlock:(RCTPromiseRejectBlock)reject;

@end

NS_ASSUME_NONNULL_END
