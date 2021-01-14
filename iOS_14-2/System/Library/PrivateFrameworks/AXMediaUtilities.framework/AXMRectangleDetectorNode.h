/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>

@interface AXMRectangleDetectorNode : AXMEvaluationNode {

	double _cameraPixelFocalLength;
	double _minimumAspectRatio;
	double _maximumAspectRatio;
	double _quadratureTolerance;
	double _minimumSize;
	long long _maximumNumberOfRects;
	CGPoint _cameraOpticalOrigin;

}

@property (assign,nonatomic) double cameraPixelFocalLength;               //@synthesize cameraPixelFocalLength=_cameraPixelFocalLength - In the implementation block
@property (assign,nonatomic) CGPoint cameraOpticalOrigin;                 //@synthesize cameraOpticalOrigin=_cameraOpticalOrigin - In the implementation block
@property (assign,nonatomic) double minimumAspectRatio;                   //@synthesize minimumAspectRatio=_minimumAspectRatio - In the implementation block
@property (assign,nonatomic) double maximumAspectRatio;                   //@synthesize maximumAspectRatio=_maximumAspectRatio - In the implementation block
@property (assign,nonatomic) double quadratureTolerance;                  //@synthesize quadratureTolerance=_quadratureTolerance - In the implementation block
@property (assign,nonatomic) double minimumSize;                          //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfRects;              //@synthesize maximumNumberOfRects=_maximumNumberOfRects - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
+(id)title;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMinimumSize:(double)arg1 ;
-(void)setCameraPixelFocalLength:(double)arg1 ;
-(void)setCameraOpticalOrigin:(CGPoint)arg1 ;
-(void)setMinimumAspectRatio:(double)arg1 ;
-(void)setMaximumAspectRatio:(double)arg1 ;
-(double)minimumSize;
-(void)setQuadratureTolerance:(double)arg1 ;
-(void)setMaximumNumberOfRects:(long long)arg1 ;
-(double)cameraPixelFocalLength;
-(CGPoint)cameraOpticalOrigin;
-(double)minimumAspectRatio;
-(double)maximumAspectRatio;
-(double)quadratureTolerance;
-(long long)maximumNumberOfRects;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(BOOL)requiresVisionFramework;
@end

