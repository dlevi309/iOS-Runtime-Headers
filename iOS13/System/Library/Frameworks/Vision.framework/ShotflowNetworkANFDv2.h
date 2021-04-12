/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/ShotflowNetwork.h>

@interface ShotflowNetworkANFDv2 : ShotflowNetwork
+(CGSize)inputImageSize;
+(id)modelName;
+(float)nonSquareYawDefault;
+(float)nonSquareRollDefault;
+(const vector<unsigned long, std::__1::allocator<unsigned long> >*)importantClasses;
+(BOOL)poseSquare;
+(unsigned long long)mumberPosClasses;
+(unsigned long long)mumberBinsNegativeMaxout;
+(const vector<float, std::__1::allocator<float> >*)ratios;
+(const vector<float, std::__1::allocator<float> >*)cellStartsX;
+(const vector<float, std::__1::allocator<float> >*)cellStartsY;
+(const vector<float, std::__1::allocator<float> >*)objectnessFilterThresholds;
+(unsigned long long)numberMaxoutLayers;
+(BOOL)hasObjectnessOutputs;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
-(void)initializeBuffers;
@end

