/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIView, SBIconImageView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView {

	UIView* _containerView;
	UIView* _crossfadeContainerView;
	SBIconImageView* _iconImageView;
	UIView* _crossfadeView;
	double _containerScaleX;
	double _containerScaleY;
	double _morphFraction;
	BOOL _masksCorners;
	BOOL _performsTrueCrossfade;
	CGPoint _stretchAnchorPoint;

}

@property (nonatomic,readonly) UIView * containerView;                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) SBIconImageView * iconImageView; 
@property (nonatomic,readonly) UIView * crossfadeView; 
@property (assign,nonatomic) BOOL masksCorners;                              //@synthesize masksCorners=_masksCorners - In the implementation block
@property (assign,nonatomic) BOOL performsTrueCrossfade;                     //@synthesize performsTrueCrossfade=_performsTrueCrossfade - In the implementation block
@property (assign,nonatomic) CGPoint stretchAnchorPoint;                     //@synthesize stretchAnchorPoint=_stretchAnchorPoint - In the implementation block
-(void)cleanup;
-(UIView *)containerView;
-(void)layoutSubviews;
-(SBIconImageView *)iconImageView;
-(void)_updateCornerMask;
-(BOOL)performsTrueCrossfade;
-(void)setCrossfadeFraction:(double)arg1 ;
-(void)setMorphFraction:(double)arg1 ;
-(void)setPerformsTrueCrossfade:(BOOL)arg1 ;
-(BOOL)masksCorners;
-(void)setMasksCorners:(BOOL)arg1 ;
-(id)initWithImageView:(id)arg1 crossfadeView:(id)arg2 ;
-(void)setStretchAnchorPoint:(CGPoint)arg1 ;
-(void)prepareGeometry;
-(void)setAppSnapshotCornerRadius:(double)arg1 ;
-(void)applyCornerRadius:(double)arg1 ;
-(void)setCornerRadiusEnabled:(BOOL)arg1 ;
-(UIView *)crossfadeView;
-(CGPoint)stretchAnchorPoint;
@end

