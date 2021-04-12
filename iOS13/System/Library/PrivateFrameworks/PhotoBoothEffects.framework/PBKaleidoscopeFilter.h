/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBFilter.h>

@interface PBKaleidoscopeFilter : PBFilter {

	BOOL firstTime;
	float _inputAmount;
	float lastInputX;
	float lastInputY;
	float lastInputSize;
	float lastInputDecay;
	float lastInputRotation;
	float inputRotation;
	CGPoint inputPoint;

}

@property (assign) CGPoint inputPoint; 
@property (assign) float inputAmount; 
@property (assign) float inputRotation; 
-(void)setDefaults;
-(float)inputAmount;
-(void)setInputAmount:(float)arg1 ;
-(float)inputRotation;
-(void)setInputRotation:(float)arg1 ;
-(CGPoint)inputPoint;
-(void)setInputPoint:(CGPoint)arg1 ;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
-(BOOL)allowAbsoluteGestures;
@end

