/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <libobjc.A.dylib/AWUnitTestSampler.h>

@protocol AWUnitTestSampler
@required
-(void)setSmartCoverClosed:(BOOL)arg1;
-(void)setDisplayCallback:(/*^block*/id)arg1;
-(void)setDisplayState:(BOOL)arg1;
-(void)getStatsWithBlock:(/*^block*/id)arg1;
-(void)resetStats;
-(void)setSampleState:(BOOL)arg1;
-(void)setSampleState:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)setDisplayState:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setSmartCoverClosed:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setSmartCoverCallback:(/*^block*/id)arg1;
-(void)setPearlErrorState:(BOOL)arg1;
-(void)setPearlErrorState:(BOOL)arg1 reply:(/*^block*/id)arg2;

@end


@protocol NSXPCProxyCreating, OS_dispatch_queue;
@class NSObject;

@interface AWUnitTestSampler : NSObject <AWUnitTestSampler> {

	id<NSXPCProxyCreating> _remoteSamplerProxy;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedSampler;
-(id)_connect;
-(id)init;
-(id)connect;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)setDisplayCallback:(/*^block*/id)arg1 ;
-(void)setDisplayState:(BOOL)arg1 ;
-(void)getStatsWithBlock:(/*^block*/id)arg1 ;
-(void)resetStats;
-(void)setSampleState:(BOOL)arg1 ;
-(void)setSampleState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 ;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)setDisplayState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSmartCoverClosed:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSmartCoverCallback:(/*^block*/id)arg1 ;
-(void)setPearlErrorState:(BOOL)arg1 ;
-(void)setPearlErrorState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)invokeSampler:(/*^block*/id)arg1 ;
@end

