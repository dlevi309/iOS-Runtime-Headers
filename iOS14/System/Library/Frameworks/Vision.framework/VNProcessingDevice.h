/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VNProcessingDevice : NSObject <NSCopying>
+(id)allDevices;
+(id)defaultANEDevice;
+(void)_lockStaticObjectsAccessLock;
+(void)_unlockStaticObjectsAccessLock;
+(id)defaultDevice;
+(id)defaultCPUDevice;
+(id)defaultMetalDevice;
+(id)deviceForMetalDevice:(id)arg1 ;
+(id)directANEDevice;
+(void)forcedCleanup;
-(BOOL)targetsANE;
-(int)espressoEngine;
-(int)espressoStorageType;
-(BOOL)targetsCPU;
-(int)espressoDeviceID;
-(BOOL)targetsGPU;
-(id)description;
-(id)metalDevice;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

