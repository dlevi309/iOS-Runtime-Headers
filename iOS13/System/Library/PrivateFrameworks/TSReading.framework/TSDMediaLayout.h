/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledLayout.h>

@class TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout {

	CGRect mCachedAlignmentFrame;
	struct {
		unsigned alignmentFrame : 1;
	}  mMediaInvalidFlags;
	TSDMutableStroke* mDynamicStroke;
	BOOL mShouldRenderFrameStroke;
	CGRect mBoundsForStandardKnobs;

}

@property (assign,nonatomic) CGRect boundsForStandardKnobs; 
@property (assign,nonatomic) BOOL shouldRenderFrameStroke; 
-(id)initWithInfo:(id)arg1 ;
-(id)stroke;
-(void)setGeometry:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)boundsForStandardKnobs;
-(BOOL)supportsRotation;
-(CGRect)alignmentFrame;
-(BOOL)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(double)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(CGRect)alignmentFrameInRoot;
-(void)invalidateAlignmentFrame;
-(BOOL)shouldRenderFrameStroke;
-(void)setShouldRenderFrameStroke:(BOOL)arg1 ;
-(void)setBoundsForStandardKnobs:(CGRect)arg1 ;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)mediaInfo;
@end

