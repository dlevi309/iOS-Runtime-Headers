/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <libobjc.A.dylib/ADLensDistortionModel.h>

@class NSData, NSString;

@interface ADMillimeterRadiusPairsLensDistortionModel : NSObject <ADLensDistortionModel> {

	NSData* _distortedRadii;
	NSData* _undistortedRadii;
	CGPoint _distortionCenter;

}

@property (nonatomic,readonly) CGPoint distortionCenter;               //@synthesize distortionCenter=_distortionCenter - In the implementation block
@property (nonatomic,readonly) NSData * distortedRadii;                //@synthesize distortedRadii=_distortedRadii - In the implementation block
@property (nonatomic,readonly) NSData * undistortedRadii;              //@synthesize undistortedRadii=_undistortedRadii - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)distortedRadii;
-(NSData *)undistortedRadii;
-(id)initWithDistortionCenter:(CGPoint)arg1 distortedRadii:(id)arg2 undistortedRadii:(id)arg3 ;
-(void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(CGPoint*)arg4 ;
-(void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(CGPoint*)arg4 ;
-(void)applyDistortionModelToPixels:(unsigned long long)arg1 inPixels:(const CGPoint*)arg2 intrinsicsMatrix:(SCD_Struct_AD12)arg3 pixelSize:(double)arg4 distort:(BOOL)arg5 outPixels:(CGPoint*)arg6 ;
-(CGPoint)distortionCenter;
@end

