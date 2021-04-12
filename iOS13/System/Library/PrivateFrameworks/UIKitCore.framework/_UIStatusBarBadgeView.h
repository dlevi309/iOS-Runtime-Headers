/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UILabel, NSArray, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarBadgeView : UIView <_UIStatusBarDisplayable> {

	UILabel* _label;
	NSArray* _constraintsWithConstant;

}

@property (nonatomic,retain) UILabel * label;                                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * constraintsWithConstant;                                      //@synthesize constraintsWithConstant=_constraintsWithConstant - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForLastBaselineLayout;
-(void)applyStyleAttributes:(id)arg1 ;
-(NSArray *)constraintsWithConstant;
-(void)setConstraintsWithConstant:(NSArray *)arg1 ;
@end

