/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIStackView, NSArray, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarMultilineStringView : UIView <_UIStatusBarDisplayable> {

	long long _numberOfLines;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;                                                //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                                                //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) NSArray * stringViews; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyStyleAttributes:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(long long)arg1 ;
-(UIStackView *)stackView;
-(NSArray *)stringViews;
-(long long)numberOfLines;
-(void)setStackView:(UIStackView *)arg1 ;
@end

