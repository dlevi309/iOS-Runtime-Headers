/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) CGPoint distortionCenter;               //@synthesize distortionCenter=_distortionCenter - In the implementation block
@property (nonatomic,retain) NSData * distortedRadii;                //@synthesize distortedRadii=_distortedRadii - In the implementation block
@property (nonatomic,retain) NSData * undistortedRadii;              //@synthesize undistortedRadii=_undistortedRadii - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scale:(float)arg1 ;
-(void)crop:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDistortionCenter:(CGPoint)arg1 distortedRadii:(id)arg2 undistortedRadii:(id)arg3 ;
-(void)setDistortedRadii:(NSData *)arg1 ;
-(void)setUndistortedRadii:(NSData *)arg1 ;
-(void)setDistortionCenter:(CGPoint)arg1 ;
-(NSData *)distortedRadii;
-(NSData *)undistortedRadii;
-(CGPoint)distortionCenter;
-(void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(CGPoint*)arg4 ;
-(void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(CGPoint*)arg4 ;
-(void)adjustForImageRotation:(long long)arg1 forDimensions:(CGSize)arg2 ;
-(void)applyDistortionModelToPixels:(unsigned long long)arg1 inPixels:(const CGPoint*)arg2 intrinsicsMatrix:(SCD_Struct_AD22)arg3 pixelSize:(double)arg4 distort:(BOOL)arg5 outPixels:(CGPoint*)arg6 ;
@end

