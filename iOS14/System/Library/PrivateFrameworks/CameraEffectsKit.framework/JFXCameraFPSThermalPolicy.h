/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/JFXThermalPolicy.h>
#import <libobjc.A.dylib/JFXVideoCameraThermalDelegate.h>

@class NSString;

@interface JFXCameraFPSThermalPolicy : NSObject <JFXThermalPolicy, JFXVideoCameraThermalDelegate>

@property (nonatomic,readonly) unsigned long long priority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned long long)priority;
-(void)cameraFPSForThermalLevel:(int)arg1 deviceType:(id)arg2 minRate:(out int*)arg3 maxRate:(out int*)arg4 ;
@end

