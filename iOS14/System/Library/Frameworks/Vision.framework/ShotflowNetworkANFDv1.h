/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/ShotflowNetwork.h>

@interface ShotflowNetworkANFDv1 : ShotflowNetwork
+(unsigned long long)numberMaxoutLayers;
+(CGSize)inputImageSize;
+(id)modelName;
+(unsigned long long)mumberBinsNegativeMaxout;
+(BOOL)poseSquare;
+(const vector<float, std::__1::allocator<float> >*)cellStartsX;
+(unsigned long long)mumberPosClasses;
+(const vector<float, std::__1::allocator<float> >*)cellStartsY;
+(const vector<unsigned long, std::__1::allocator<unsigned long> >*)importantClasses;
+(const vector<float, std::__1::allocator<float> >*)ratios;
-(int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
-(void)initializeBuffers;
@end

