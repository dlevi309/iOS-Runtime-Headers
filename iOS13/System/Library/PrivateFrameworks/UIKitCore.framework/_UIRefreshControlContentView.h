/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class UIRefreshControl, UIColor, UIImpactFeedbackGenerator, NSAttributedString;

@interface _UIRefreshControlContentView : UIView {

	UIRefreshControl* _refreshControl;
	UIColor* _tintColor;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;

}

@property (nonatomic,readonly) long long style; 
@property (assign,nonatomic) UIRefreshControl * refreshControl;                                //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) double minimumSnappingHeight; 
@property (nonatomic,readonly) double maximumSnappingHeight; 
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;              //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(long long)style;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(void)refreshControlInvalidatedSnappingHeight;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)maximumSnappingHeight;
-(double)minimumSnappingHeight;
-(void)willTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)_removeAllAnimations;
@end

