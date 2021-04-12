/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDDrawableLayout.h>

@interface TSDStyledLayout : TSDDrawableLayout {

	BOOL mIsUpdatingOpacity;
	double mDynamicOpacity;

}

@property (nonatomic,readonly) double opacity; 
-(double)opacity;
-(BOOL)isInvisible;
-(BOOL)canFlip;
-(CGRect)frameForCulling;
-(CGRect)alignmentFrameInRoot;
-(CGRect)aliasedAlignmentFrameForScale:(double)arg1 ;
-(CGRect)i_baseFrame;
-(id)styledInfo;
-(CGRect)reflectionBoundsForRect:(CGRect)arg1 ;
-(CGRect)shadowedNaturalBoundsWithoutOffset;
-(CGRect)reflectionFrame;
-(CGRect)reflectionFrameInRoot;
-(CGRect)reflectionFrameForSubRect:(CGRect)arg1 ;
-(void)dynamicOpacityChangeDidBegin;
-(void)dynamicOpacityUpdateToValue:(double)arg1 ;
-(void)dynamicOpacityChangeDidEnd;
@end

