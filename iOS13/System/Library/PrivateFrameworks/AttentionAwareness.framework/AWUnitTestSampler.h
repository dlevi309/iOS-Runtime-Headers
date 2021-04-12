/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <libobjc.A.dylib/AWUnitTestSampler.h>

@protocol AWUnitTestSampler
@required
-(void)setDisplayState:(BOOL)arg1;
-(void)setSmartCoverClosed:(BOOL)arg1;
-(void)getStatsWithBlock:(/*^block*/id)arg1;
-(void)resetStats;
-(void)setSampleState:(BOOL)arg1;
-(void)setSampleState:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)setDisplayState:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setDisplayCallback:(/*^block*/id)arg1;
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
-(id)init;
-(id)connect;
-(id)_connect;
-(void)setDisplayState:(BOOL)arg1 ;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)getStatsWithBlock:(/*^block*/id)arg1 ;
-(void)resetStats;
-(void)setSampleState:(BOOL)arg1 ;
-(void)setSampleState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 ;
-(void)setSampleState:(BOOL)arg1 deliverEvent:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)setDisplayState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setDisplayCallback:(/*^block*/id)arg1 ;
-(void)setSmartCoverClosed:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSmartCoverCallback:(/*^block*/id)arg1 ;
-(void)setPearlErrorState:(BOOL)arg1 ;
-(void)setPearlErrorState:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)invokeSampler:(/*^block*/id)arg1 ;
@end

