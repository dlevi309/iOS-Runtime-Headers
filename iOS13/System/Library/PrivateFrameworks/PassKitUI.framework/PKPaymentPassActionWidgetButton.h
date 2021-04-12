/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

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
+(double)glyphImageHeight;
+(double)widgetHeightWithAccessibilityLayout:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(void)_applyStyles;
-(id)initWithWidgetViewStyle:(unsigned long long)arg1 ;
-(void)setUsesAccessibilityLayout:(BOOL)arg1 ;
-(BOOL)usesAccessibilityLayout;
-(unsigned long long)passActionType;
-(void)setPassActionType:(unsigned long long)arg1 ;
@end

