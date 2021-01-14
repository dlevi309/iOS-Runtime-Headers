/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <UIKitCore/UIView.h>

@class BSUIAnimationFactory, UIView;

@interface SBCrossfadeView : UIView {

	BSUIAnimationFactory* _animationFactory;
	UIView* _startView;
	UIView* _endView;
	BOOL _translucent;
	BOOL _crossfaded;
	BOOL _allowsGroupOpacityDuringCrossfade;
	BOOL _adaptsAnimationFactoryTimingFunction;

}

@property (nonatomic,retain) BSUIAnimationFactory * animationFactory;                //@synthesize animationFactory=_animationFactory - In the implementation block
@property (assign,nonatomic) BOOL allowsGroupOpacityDuringCrossfade;                 //@synthesize allowsGroupOpacityDuringCrossfade=_allowsGroupOpacityDuringCrossfade - In the implementation block
@property (assign,nonatomic) BOOL adaptsAnimationFactoryTimingFunction;              //@synthesize adaptsAnimationFactoryTimingFunction=_adaptsAnimationFactoryTimingFunction - In the implementation block
+(id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BSUIAnimationFactory *)animationFactory;
-(void)setAnimationFactory:(BSUIAnimationFactory *)arg1 ;
-(BOOL)allowsGroupOpacityDuringCrossfade;
-(BOOL)adaptsAnimationFactoryTimingFunction;
-(void)setAllowsGroupOpacityDuringCrossfade:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setAdaptsAnimationFactoryTimingFunction:(BOOL)arg1 ;
-(id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3 ;
-(void)crossfadeWithCompletion:(/*^block*/id)arg1 ;
@end

