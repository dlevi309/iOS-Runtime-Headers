/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface CSPhoneCallStateMonitor : CSEventMonitor <CXCallObserverDelegate> {

	CXCallObserver* _callObserver;

}

@property (nonatomic,retain) CXCallObserver * callObserver;              //@synthesize callObserver=_callObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(CXCallObserver *)callObserver;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(BOOL)isInPhoneCallState;
@end

