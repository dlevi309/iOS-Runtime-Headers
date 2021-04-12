/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/ShotflowNetwork.h>

@interface ShotflowNetworkANODBase : ShotflowNetwork
+(unsigned long long)numberMaxoutLayers;
+(CGSize)inputImageSize;
+(unsigned long long)mumberBinsNegativeMaxout;
+(BOOL)poseSquare;
+(const vector<float, std::__1::allocator<float> >*)cellStartsX;
+(const vector<float, std::__1::allocator<float> >*)cellStartsY;
+(const vector<float, std::__1::allocator<float> >*)ratios;
+(float)nonSquareYawDefault;
+(float)nonSquareRollDefault;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
-(void)initializeBuffers;
@end

