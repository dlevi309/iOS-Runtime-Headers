/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)constraintsWithConstant;
-(void)setConstraintsWithConstant:(NSArray *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

