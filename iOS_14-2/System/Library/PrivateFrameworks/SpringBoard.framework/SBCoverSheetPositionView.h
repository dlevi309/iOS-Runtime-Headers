/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(double)_progressForTouchLocation:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)_progressFromContenViewFrame:(CGRect)arg1 ;
-(CGAffineTransform)_transformForLocation:(CGPoint)arg1 transformMode:(long long)arg2 ;
-(CGRect)positionContentForTouchAtLocation:(CGPoint)arg1 ;
-(CGPoint)_simulatedTouchLocationForProgress;
-(void)setProgress:(double)arg1 ;
-(void)_createContentView;
-(UIView *)contentView;
-(CGRect)positionContentForTouchAtLocation:(CGPoint)arg1 withTransformMode:(long long)arg2 forPresentationValue:(BOOL)arg3 ;
@end

