/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UISwitchControl;
@class UIImpactFeedbackGenerator;

@interface UISwitchVisualElement : UIView {

	BOOL _enabled;
	id<UISwitchControl> _switchControl;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;
	double _enabledAlpha;

}

@property (assign,nonatomic) double enabledAlpha;                                              //@synthesize enabledAlpha=_enabledAlpha - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<UISwitchControl> switchControl;                         //@synthesize switchControl=_switchControl - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;              //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
+(CGSize)preferredContentSize;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredContentSize;
-(void)setTintColor:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setThumbTintColor:(id)arg1 ;
-(void)setOnTintColor:(id)arg1 ;
-(void)setOnImage:(id)arg1 ;
-(void)setOffImage:(id)arg1 ;
-(void)setSwitchControl:(id<UISwitchControl>)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsOnOffLabel:(BOOL)arg1 ;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(id<UISwitchControl>)switchControl;
-(void)setEnabledAlpha:(double)arg1 ;
-(double)enabledAlpha;
@end

