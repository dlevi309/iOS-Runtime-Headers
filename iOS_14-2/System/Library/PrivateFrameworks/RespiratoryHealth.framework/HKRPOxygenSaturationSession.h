/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKRPOxygenSaturationSessionClientInterface.h>

@protocol HKRPOxygenSaturationSessionDelegate;
@class HKHealthStore, HKTaskServerProxyProvider, NSString;

@interface HKRPOxygenSaturationSession : NSObject <_HKXPCExportable, HKRPOxygenSaturationSessionClientInterface> {

	id<HKRPOxygenSaturationSessionDelegate> _delegate;
	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                            //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (assign,nonatomic,__weak) id<HKRPOxygenSaturationSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(id<HKRPOxygenSaturationSessionDelegate>)delegate;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)setDelegate:(id<HKRPOxygenSaturationSessionDelegate>)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)abortWithCompletion:(/*^block*/id)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(void)clientRemote_didSendFeedback:(unsigned long long)arg1 ;
-(void)clientRemote_didStartWithStartTime:(double)arg1 expectedDuration:(double)arg2 ;
-(void)clientRemote_didEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6 ;
@end

