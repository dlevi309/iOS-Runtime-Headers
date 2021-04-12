/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
@class NetworkAnalyticsStateRelay, NSObject;

@interface WiFiViabilityMonitor : NSObject {

	unsigned _prevWiFiViability;
	id _cellFallbackObserver;
	id _cellFallbackAdminObserver;
	NetworkAnalyticsStateRelay* _wifiRelay;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)getState;
-(void)dealloc;
-(BOOL)_isCellFallbackAdminDisabled;
-(long long)_currentRNFAdvice;
-(unsigned)currentWiFiViabilityFlags;
-(void)possiblySignificantWiFiChange;
@end

