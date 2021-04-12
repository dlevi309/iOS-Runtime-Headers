/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputPoint:(CGPoint)arg1 ;
-(float)inputAmount;
-(void)setInputAmount:(float)arg1 ;
-(void)setDefaults;
-(CGPoint)inputPoint;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
@end

