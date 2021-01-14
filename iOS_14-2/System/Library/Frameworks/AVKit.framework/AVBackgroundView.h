/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVLayoutView;

@interface AVBackgroundView : UIView {

	BOOL _automaticallyDrawsRoundedCorners;
	BOOL _prefersLowQualityEffects;
	BOOL _circular;
	AVLayoutView* _layoutView;

}

@property (nonatomic,retain) AVLayoutView * layoutView;                          //@synthesize layoutView=_layoutView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDrawsRoundedCorners;              //@synthesize automaticallyDrawsRoundedCorners=_automaticallyDrawsRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL prefersLowQualityEffects;                      //@synthesize prefersLowQualityEffects=_prefersLowQualityEffects - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;                    //@synthesize circular=_circular - In the implementation block
-(void)setPrefersLowQualityEffects:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)automaticallyDrawsRoundedCorners;
-(void)didMoveToSuperview;
-(void)setCircular:(BOOL)arg1 ;
-(BOOL)prefersLowQualityEffects;
-(BOOL)_isContainedInOverlappingBackgroundView;
-(void)layoutSubviews;
-(void)setAutomaticallyDrawsRoundedCorners:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)_ensureOrRemoveLayoutView;
-(void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3 ;
-(void)setLayoutView:(AVLayoutView *)arg1 ;
-(void)_updateBackdropShape;
-(BOOL)isCircular;
-(AVLayoutView *)layoutView;
@end

