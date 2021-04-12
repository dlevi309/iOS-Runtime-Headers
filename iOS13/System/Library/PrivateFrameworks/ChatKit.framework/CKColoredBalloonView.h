/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView;

@interface CKColoredBalloonView : CKBalloonView {

	char _color;
	BOOL _wantsGradient;
	CKBalloonImageView* _mask;
	CKBalloonImageView* _effectViewMask;
	CKGradientView* _gradientView;
	CGRect _gradientOverrideFrame;

}

@property (nonatomic,retain) CKBalloonImageView * mask;                                           //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * effectViewMask;                                 //@synthesize effectViewMask=_effectViewMask - In the implementation block
@property (nonatomic,retain) CKGradientView * gradientView;                                       //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic) BOOL wantsGradient;                                                  //@synthesize wantsGradient=_wantsGradient - In the implementation block
@property (assign,nonatomic) char color;                                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView; 
@property (nonatomic,readonly) BOOL hasBackground; 
@property (assign,nonatomic) CGRect gradientOverrideFrame;                                        //@synthesize gradientOverrideFrame=_gradientOverrideFrame - In the implementation block
-(id)description;
-(void)prepareForReuse;
-(char)color;
-(void)setBounds:(CGRect)arg1 ;
-(void)setColor:(char)arg1 ;
-(CKBalloonImageView *)mask;
-(void)setMask:(CKBalloonImageView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)hasBackground;
-(void)prepareForDisplay;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(CKGradientView *)gradientView;
-(void)setGradientView:(CKGradientView *)arg1 ;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(BOOL)wantsGradient;
-(void)setHasTail:(BOOL)arg1 ;
-(id)overlayColor;
-(BOOL)needsGroupOpacity;
-(void)setBalloonDescriptor:(CKBalloonDescriptor_t)arg1 ;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)configureForComposition:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setGradientOverrideFrame:(CGRect)arg1 ;
-(void)setEffectViewMaskImage:(id)arg1 ;
-(void)updateWantsGradient;
-(void)setWantsGradient:(BOOL)arg1 ;
-(CKBalloonImageView *)effectViewMask;
-(CGRect)gradientOverrideFrame;
-(void)setEffectViewMask:(CKBalloonImageView *)arg1 ;
@end

