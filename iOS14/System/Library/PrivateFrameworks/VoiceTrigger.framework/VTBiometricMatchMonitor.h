/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <VoiceTrigger/VTEventMonitor.h>
#import <libobjc.A.dylib/BKDeviceDelegate.h>

@protocol VTBiometricMatchMonitorDelegate;
@class BKDevice, NSString;

@interface VTBiometricMatchMonitor : VTEventMonitor <BKDeviceDelegate> {

	id<VTBiometricMatchMonitorDelegate> _delegate;
	BKDevice* _biometricDevice;

}

@property (nonatomic,retain) BKDevice * biometricDevice;                                       //@synthesize biometricDevice=_biometricDevice - In the implementation block
@property (assign,nonatomic,__weak) id<VTBiometricMatchMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)startObserving;
-(id)init;
-(id<VTBiometricMatchMonitorDelegate>)delegate;
-(void)setDelegate:(id<VTBiometricMatchMonitorDelegate>)arg1 ;
-(BOOL)getLastBiometricMatchEvent:(BOOL*)arg1 atTime:(unsigned long long*)arg2 ;
-(void)device:(id)arg1 matchEventOccurred:(id)arg2 ;
-(BKDevice *)biometricDevice;
-(void)setBiometricDevice:(BKDevice *)arg1 ;
@end

