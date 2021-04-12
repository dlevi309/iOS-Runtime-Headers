/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIView;

@interface SBCoverSheetPositionView : SBFTouchPassThroughView {

	UIView* _contentView;
	double _progress;

}

@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(UIView *)contentView;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)positionContentForTouchAtLocation:(CGPoint)arg1 withTransformMode:(long long)arg2 forPresentationValue:(BOOL)arg3 ;
-(void)_createContentView;
-(double)_progressFromContenViewFrame:(CGRect)arg1 ;
-(CGPoint)_simulatedTouchLocationForProgress;
-(CGRect)positionContentForTouchAtLocation:(CGPoint)arg1 ;
-(CGAffineTransform)_transformForLocation:(CGPoint)arg1 transformMode:(long long)arg2 ;
-(double)_progressForTouchLocation:(CGPoint)arg1 ;
@end

