/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/JFXVideoCameraThermalDelegate.h>

@class JFXThermalPolicyManager, NSString;

@interface CFXThermalPolicyManager : NSObject <JFXVideoCameraThermalDelegate> {

	BOOL _recordingPolicy;
	JFXThermalPolicyManager* _policyManager;

}

@property (nonatomic,retain) JFXThermalPolicyManager * policyManager;              //@synthesize policyManager=_policyManager - In the implementation block
@property (assign,nonatomic) BOOL recordingPolicy;                                 //@synthesize recordingPolicy=_recordingPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cameraFPSForThermalLevel:(int)arg1 deviceType:(id)arg2 minRate:(out int*)arg3 maxRate:(out int*)arg4 ;
-(void)setRecordingPolicy:(BOOL)arg1 ;
-(JFXThermalPolicyManager *)policyManager;
-(void)CFX_notifyPolicyChanged;
-(BOOL)recordingPolicy;
-(void)setPolicyManager:(JFXThermalPolicyManager *)arg1 ;
@end

