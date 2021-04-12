/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/BKDeviceDelegate.h>

@protocol CSBiometricMatchMonitorDelegate;
@class BKDevice, NSString;

@interface CSBiometricMatchMonitor : CSEventMonitor <BKDeviceDelegate> {

	id<CSBiometricMatchMonitorDelegate> _delegate;
	BKDevice* _biometricDevice;

}

@property (nonatomic,retain) BKDevice * biometricDevice;                                       //@synthesize biometricDevice=_biometricDevice - In the implementation block
@property (assign,nonatomic,__weak) id<CSBiometricMatchMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)startObserving;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(id<CSBiometricMatchMonitorDelegate>)delegate;
-(void)setDelegate:(id<CSBiometricMatchMonitorDelegate>)arg1 ;
-(BOOL)getLastBiometricMatchEvent:(BOOL*)arg1 atTime:(unsigned long long*)arg2 ;
-(void)device:(id)arg1 matchEventOccurred:(id)arg2 ;
-(unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1 ;
-(BKDevice *)biometricDevice;
-(void)setBiometricDevice:(BKDevice *)arg1 ;
@end

