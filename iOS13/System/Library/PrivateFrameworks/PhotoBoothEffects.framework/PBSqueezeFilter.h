/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBFilter.h>

@interface PBSqueezeFilter : PBFilter {

	float lastInputX;
	float lastInputY;
	float lastInputRadius;
	float lastInputScale;
	float _inputAmount;
	BOOL firstTime;
	CGPoint inputPoint;

}

@property (assign) CGPoint inputPoint; 
@property (assign) float inputAmount; 
-(void)setDefaults;
-(float)inputAmount;
-(void)setInputAmount:(float)arg1 ;
-(CGPoint)inputPoint;
-(void)setInputPoint:(CGPoint)arg1 ;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
@end

