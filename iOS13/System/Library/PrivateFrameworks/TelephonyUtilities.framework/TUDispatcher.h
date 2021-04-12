/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TUDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)dispatcherWithIdentifier:(id)arg1 ;
+(id)dispatcherWithQueue:(id)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(/*^block*/id)qosUserInteractiveDispatchBlockForBlock:(/*^block*/id)arg1 ;
-(void)dispatchSynchronousBlock:(/*^block*/id)arg1 ;
-(void)dispatchAsynchronousBlock:(/*^block*/id)arg1 ;
-(void)boostQualityOfService;
@end

