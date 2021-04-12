/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UISwitchControl.h>
#import <UIKit/UISwitchVisualElementProvider.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIColor, UIImage, UISwitchVisualElement, UIImpactFeedbackGenerator;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding> {

	BOOL _on;
	BOOL _alwaysShowOnOffLabel;
	NSString* _title;
	UIColor* _onTintColor;
	UIColor* _thumbTintColor;
	UIImage* _onImage;
	UIImage* _offImage;
	long long _style;
	long long _preferredStyle;
	UIColor* _tintColor;
	UISwitchVisualElement* _visualElement;
	long long _switchStyle;

}

@property (nonatomic,retain) UIColor * tintColor;                                                                                                                  //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UISwitchVisualElement * visualElement;                                                                                                //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,setter=_setAlwaysShowsOnOffLabel:,getter=_alwaysShowOnOffLabel,nonatomic) BOOL alwaysShowOnOffLabel;                                             //@synthesize alwaysShowOnOffLabel=_alwaysShowOnOffLabel - In the implementation block
@property (setter=_setImpactFeedbackGenerator:,getter=_impactFeedbackGenerator,nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator; 
@property (assign,nonatomic) long long switchStyle;                                                                                                                //@synthesize switchStyle=_switchStyle - In the implementation block
@property (nonatomic,retain) UIColor * onTintColor;                                                                                                                //@synthesize onTintColor=_onTintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                                                                                                             //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,retain) UIImage * onImage;                                                                                                                    //@synthesize onImage=_onImage - In the implementation block
@property (nonatomic,retain) UIImage * offImage;                                                                                                                   //@synthesize offImage=_offImage - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                                                                                                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long preferredStyle;                                                                                                             //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                                                                                                  //@synthesize on=_on - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(id)visualElementForTraitCollection:(id)arg1 ;
+(void)setVisualElementProvider:(id)arg1 ;
+(id)visualElementForTraitCollection:(id)arg1 style:(long long)arg2 ;
-(void)_setStyle:(long long)arg1 ;
-(long long)preferredStyle;
-(UIImage *)onImage;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(UIImage *)offImage;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIColor *)thumbTintColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)setOnImage:(UIImage *)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)setOffImage:(UIImage *)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(void)setOnTintColor:(UIColor *)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isOn;
-(id)init;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)_isFixedSize;
-(void)setOn:(BOOL)arg1 ;
-(UISwitchVisualElement *)visualElement;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)_shouldShowOnOffLabels;
-(long long)switchStyle;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 notifyingVisualElement:(BOOL)arg3 ;
-(void)_setImpactFeedbackGenerator:(id)arg1 ;
-(id)_impactFeedbackGenerator;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)visualElementHadTouchUpInside:(id)arg1 ;
-(void)_showingOnOffLabelChanged;
-(CGPoint)accessibilityActivationPoint;
-(UIColor *)onTintColor;
-(void)visualElement:(id)arg1 transitionedToOn:(BOOL)arg2 ;
-(void)_setAlwaysShowsOnOffLabel:(BOOL)arg1 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)_alwaysShowOnOffLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)setSwitchStyle:(long long)arg1 ;
-(UIColor *)tintColor;
-(long long)style;
-(NSString *)title;
-(void)dealloc;
-(void)setVisualElement:(UISwitchVisualElement *)arg1 ;
-(void)_refreshVisualElement;
-(BOOL)pointMostlyInside:(CGPoint)arg1 ;
@end

