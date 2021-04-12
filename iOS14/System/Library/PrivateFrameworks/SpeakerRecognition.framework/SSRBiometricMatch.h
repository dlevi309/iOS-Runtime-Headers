/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/BKDeviceDelegate.h>

@class BKDevice, NSString;

@interface SSRBiometricMatch : NSObject <BKDeviceDelegate> {

	BKDevice* _biometricDevice;

}

@property (nonatomic,retain) BKDevice * biometricDevice;              //@synthesize biometricDevice=_biometricDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BKDevice *)biometricDevice;
-(void)setBiometricDevice:(BKDevice *)arg1 ;
-(unsigned long long)getLastBiometricMatchForVoiceTriggerTimeStamp:(unsigned long long)arg1 ;
-(BOOL)_getLastBiometricMatchEvent:(BOOL*)arg1 atTime:(unsigned long long*)arg2 ;
@end

