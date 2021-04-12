/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>

@class CKGradientView, CKBalloonImageView;

@interface CKColoredBalloonView : CKBalloonView {

	BOOL _wantsGradient;
	CKGradientView* _gradientView;
	CKBalloonImageView* _mask;
	CKBalloonImageView* _effectViewMask;
	CGRect _gradientOverrideFrame;

}

@property (nonatomic,retain) CKBalloonImageView * mask;                                           //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) CKGradientView * gradientView;                                       //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * effectViewMask;                                 //@synthesize effectViewMask=_effectViewMask - In the implementation block
@property (assign,nonatomic) BOOL wantsGradient;                                                  //@synthesize wantsGradient=_wantsGradient - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView; 
@property (nonatomic,readonly) BOOL hasBackground; 
@property (assign,nonatomic) CGRect gradientOverrideFrame;                                        //@synthesize gradientOverrideFrame=_gradientOverrideFrame - In the implementation block
-(void)prepareForDisplay;
-(CKBalloonImageView *)mask;
-(void)clearFilters;
-(BOOL)needsGroupOpacity;
-(void)setBalloonDescriptor:(CKBalloonDescriptor_t)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMask:(CKBalloonImageView *)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)configureForComposition:(id)arg1 ;
-(BOOL)hasBackground;
-(void)prepareForReuse;
-(void)setBounds:(CGRect)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)setFrame:(CGRect)arg1 ;
-(void)setColor:(char)arg1 ;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(CKGradientView *)gradientView;
-(void)configureForMessagePart:(id)arg1 ;
-(CKBalloonImageView *)effectViewMask;
-(void)setGradientView:(CKGradientView *)arg1 ;
-(void)setEffectViewMaskImage:(id)arg1 ;
-(void)updateWantsGradient;
-(void)setWantsGradient:(BOOL)arg1 ;
-(void)setGradientOverrideFrame:(CGRect)arg1 ;
-(CGRect)gradientOverrideFrame;
-(void)setEffectViewMask:(CKBalloonImageView *)arg1 ;
-(BOOL)wantsGradient;
-(id)overlayColor;
-(void)setHasTail:(BOOL)arg1 ;
@end

