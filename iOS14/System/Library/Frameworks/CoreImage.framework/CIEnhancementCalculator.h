/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIEnhancementCalculation.h>

@interface CIEnhancementCalculator : CIEnhancementCalculation {

	BOOL faceBalanceEnabled;
	BOOL vibranceEnabled;
	BOOL curvesEnabled;
	BOOL shadowsEnabled;

}

@property (assign) BOOL faceBalanceEnabled; 
@property (assign) BOOL vibranceEnabled; 
@property (assign) BOOL curvesEnabled; 
@property (assign) BOOL shadowsEnabled; 
-(id)init;
-(void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3 ;
-(id)histogramFromRows:(id)arg1 componentOffset:(unsigned)arg2 ;
-(id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3 ;
-(void)setVibranceEnabled:(BOOL)arg1 ;
-(void)setShadowsEnabled:(BOOL)arg1 ;
-(BOOL)faceBalanceEnabled;
-(void)setFaceBalanceEnabled:(BOOL)arg1 ;
-(void)setCurvesEnabled:(BOOL)arg1 ;
-(void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3 ;
-(void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(BOOL)vibranceEnabled;
-(BOOL)curvesEnabled;
-(BOOL)shadowsEnabled;
-(void)dealloc;
@end

