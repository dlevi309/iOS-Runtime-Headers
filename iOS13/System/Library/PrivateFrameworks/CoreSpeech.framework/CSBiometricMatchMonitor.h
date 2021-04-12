/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<CSBiometricMatchMonitorDelegate>)delegate;
-(void)setDelegate:(id<CSBiometricMatchMonitorDelegate>)arg1 ;
-(void)startObserving;
-(void)_stopMonitoring;
-(void)device:(id)arg1 matchEventOccurred:(id)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)getLastBiometricMatchEvent:(BOOL*)arg1 atTime:(unsigned long long*)arg2 ;
-(BKDevice *)biometricDevice;
-(void)setBiometricDevice:(BKDevice *)arg1 ;
-(unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1 ;
@end

