/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVBackdropView;

@interface AVBackgroundView : UIView {

	BOOL _automaticallyDrawsRoundedCorners;
	BOOL _prefersLowQualityEffects;
	BOOL _circular;
	AVBackdropView* _backdropView;

}

@property (nonatomic,retain) AVBackdropView * backdropView;                      //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDrawsRoundedCorners;              //@synthesize automaticallyDrawsRoundedCorners=_automaticallyDrawsRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL prefersLowQualityEffects;                      //@synthesize prefersLowQualityEffects=_prefersLowQualityEffects - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;                    //@synthesize circular=_circular - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(AVBackdropView *)backdropView;
-(void)setBackdropView:(AVBackdropView *)arg1 ;
-(void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3 ;
-(BOOL)isCircular;
-(void)setCircular:(BOOL)arg1 ;
-(void)setAutomaticallyDrawsRoundedCorners:(BOOL)arg1 ;
-(void)setPrefersLowQualityEffects:(BOOL)arg1 ;
-(void)_updateBackdropShape;
-(void)_ensureOrRemoveBackdropView;
-(BOOL)_isContainedInOverlappingBackgroundView;
-(BOOL)automaticallyDrawsRoundedCorners;
-(BOOL)prefersLowQualityEffects;
@end

