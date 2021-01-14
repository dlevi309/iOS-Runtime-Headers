/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TUDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)dispatcherWithQueue:(id)arg1 ;
+(id)dispatcherWithIdentifier:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(/*^block*/id)qosUserInteractiveDispatchBlockForBlock:(/*^block*/id)arg1 ;
-(void)dispatchAsynchronousBlock:(/*^block*/id)arg1 ;
-(void)dispatchSynchronousBlock:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)boostQualityOfService;
@end

