/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
*/


#import <JasperDepth/JasperDepth-Structs.h>
@interface JasperPointCloudUtils : NSObject {

	float _validJasperPointThreshold;

}

@property (assign,nonatomic) float validJasperPointThreshold;              //@synthesize validJasperPointThreshold=_validJasperPointThreshold - In the implementation block
-(id)init;
-(int)calculateJasperPointsPositionInImage:(id)arg1 outputJasperPointArray:(double*)arg2 confidenceLogicOption:(int)arg3 ;
-(void)croppedAndScaleJasperPoints:(double*)arg1 inputJasperPointArraySize:(int)arg2 cropX:(int)arg3 cropY:(int)arg4 scaleX:(double)arg5 scaleY:(double)arg6 outputVector:(vector<float, std::__1::allocator<float> >*)arg7 ;
-(int)dropIllegalJasperPoints:(vector<float, std::__1::allocator<float> >*)arg1 depthMaxLimitation:(int)arg2 depthMinLimitation:(int)arg3 imageMaxWidth:(int)arg4 imageMaxHeight:(int)arg5 outputJasperPointsFloatArray:(float*)arg6 outputNumberOfUniquiePoints:(unsigned*)arg7 ;
-(float)validJasperPointThreshold;
-(void)setValidJasperPointThreshold:(float)arg1 ;
@end

