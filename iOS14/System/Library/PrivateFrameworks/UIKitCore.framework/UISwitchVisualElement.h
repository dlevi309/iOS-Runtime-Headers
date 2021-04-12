/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UISwitchControl;
@class NSString, UIImpactFeedbackGenerator;

@interface UISwitchVisualElement : UIView {

	BOOL _enabled;
	NSString* _title;
	id<UISwitchControl> _switchControl;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;
	double _enabledAlpha;

}

@property (assign,nonatomic) double enabledAlpha;                                              //@synthesize enabledAlpha=_enabledAlpha - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<UISwitchControl> switchControl;                         //@synthesize switchControl=_switchControl - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;              //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
+(BOOL)isFixedSize;
+(UIEdgeInsets)preferredAlignmentRectInsets;
+(CGSize)preferredContentSize;
-(BOOL)enabled;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOnImage:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setOffImage:(id)arg1 ;
-(void)setThumbTintColor:(id)arg1 ;
-(void)setOnTintColor:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSwitchControl:(id<UISwitchControl>)arg1 ;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(id<UISwitchControl>)switchControl;
-(void)setEnabledAlpha:(double)arg1 ;
-(double)enabledAlpha;
-(CGSize)preferredContentSize;
-(void)setShowsOnOffLabel:(BOOL)arg1 ;
-(NSString *)title;
@end

