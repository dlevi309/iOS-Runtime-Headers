/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <libobjc.A.dylib/ADLensDistortionModel.h>

@class NSString;

@interface ADPolynomialsLensDistortionModel : NSObject <ADLensDistortionModel> {

	ADDistortionPolynomials _polynomials;
	const ADDistortionPolynomials* _distortionPolynomials;
	CGPoint _distortionCenter;

}

@property (nonatomic,readonly) CGPoint distortionCenter;                                          //@synthesize distortionCenter=_distortionCenter - In the implementation block
@property (nonatomic,readonly) const ADDistortionPolynomials* distortionPolynomials;              //@synthesize distortionPolynomials=_distortionPolynomials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(CGPoint*)arg4 ;
-(void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const CGPoint*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(CGPoint*)arg4 ;
-(CGPoint)distortionCenter;
-(id)initWithDistortionCenter:(CGPoint)arg1 andPloynomials:(const ADDistortionPolynomials*)arg2 ;
-(const ADDistortionPolynomials*)distortionPolynomials;
@end

