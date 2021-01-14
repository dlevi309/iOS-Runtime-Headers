/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/ShotflowNetworkANODBase.h>

@interface ShotflowNetworkANODv3 : ShotflowNetworkANODBase
+(id)inputLayerName;
+(id)modelName;
+(float)inputScale;
+(BOOL)hasPose;
+(unsigned long long)mumberPosClasses;
+(const vector<unsigned long, std::__1::allocator<unsigned long> >*)importantClasses;
+(BOOL)inputBGR;
+(tuple<float, float, float>)inputBiasRGB;
-(int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
-(void)initializeBuffers;
-(id)processVImage:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
@end

