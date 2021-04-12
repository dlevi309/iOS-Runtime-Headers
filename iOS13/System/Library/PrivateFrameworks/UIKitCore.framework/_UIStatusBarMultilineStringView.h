/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIStackView, NSArray, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarMultilineStringView : UIView <_UIStatusBarDisplayable> {

	long long _numberOfLines;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;                                                //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                                                //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) NSArray * stringViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(UIStackView *)stackView;
-(long long)numberOfLines;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(NSArray *)stringViews;
@end

