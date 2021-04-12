/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VNProcessingDevice : NSObject <NSCopying>
+(void)forcedCleanup;
+(id)allDevices;
+(void)_lockStaticObjectsAccessLock;
+(void)_unlockStaticObjectsAccessLock;
+(id)defaultDevice;
+(id)defaultCPUDevice;
+(id)defaultMetalDevice;
+(id)deviceForMetalDevice:(id)arg1 ;
+(id)defaultANEDevice;
+(id)directANEDevice;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)metalDevice;
-(BOOL)targetsANE;
-(int)espressoStorageType;
-(BOOL)targetsGPU;
-(int)espressoDeviceID;
-(int)espressoEngine;
-(BOOL)targetsCPU;
@end

