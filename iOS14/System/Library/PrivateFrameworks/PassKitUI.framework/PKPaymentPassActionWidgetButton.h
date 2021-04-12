/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSArray;

@interface PKPaymentPassActionWidgetButton : UIButton {

	BOOL _usesAccessibilityLayout;
	NSArray* _actions;
	unsigned long long _passActionType;

}

@property (nonatomic,retain) NSArray * actions;                              //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL usesAccessibilityLayout;                   //@synthesize usesAccessibilityLayout=_usesAccessibilityLayout - In the implementation block
@property (assign,nonatomic) unsigned long long passActionType;              //@synthesize passActionType=_passActionType - In the implementation block
+(double)widgetHeightWithAccessibilityLayout:(BOOL)arg1 ;
+(double)glyphImageHeight;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)layoutSubviews;
-(id)initWithWidgetViewStyle:(unsigned long long)arg1 ;
-(void)setUsesAccessibilityLayout:(BOOL)arg1 ;
-(BOOL)usesAccessibilityLayout;
-(unsigned long long)passActionType;
-(void)setPassActionType:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_applyStyles;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

