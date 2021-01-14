/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSAttributedString *)attributedTitle;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_removeAllAnimations;
-(void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)maximumSnappingHeight;
-(void)refreshControlInvalidatedSnappingHeight;
-(double)minimumSnappingHeight;
-(UIRefreshControl *)refreshControl;
-(void)willTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(UIColor *)tintColor;
-(long long)style;
@end

