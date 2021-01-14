/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <libobjc.A.dylib/ADLensDistortionModel.h>

@class NSString;

@interface ADPolynomialsLensDistortionModel : NSObject <ADLensDistortionModel> {

	ADDistortionPolynomials _polynomials;
	CGPoint _distortionCenter;

}

@property (assign,nonatomic) CGPoint distortionCenter;                                          //@synthesize distortionCenter=_distortionCenter - In the implementation block
@property (assign,nonatomic) const ADDistortionPolynomials* distortionPolynomials; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scale:(float)arg1 ;
-(void)crop:(CGRect)arg1 ;
-(id)initWithDistortionCenter:(CGPoint)arg1 andPolynomials:(const ADDistortionPolynomials*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDistortionPolynomials:(const ADDistortionPolynomials*)arg1 ;
-(void)setDistortionCenter:(CGPoint)arg1 ;
-(const ADDistortionPolynomials*)distortionPolynomials;
-(CGPoint)distortionCenter;
-(void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(CGPoint*)arg4 ;
-(void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(CGPoint*)arg4 ;
-(void)adjustForImageRotation:(long long)arg1 forDimensions:(CGSize)arg2 ;
-(id)initWithDistortionCenter:(CGPoint)arg1 andPloynomials:(const ADDistortionPolynomials*)arg2 ;
@end

