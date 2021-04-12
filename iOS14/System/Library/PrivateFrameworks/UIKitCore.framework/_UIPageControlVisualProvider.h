/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIPageControl, UIImage;

@interface _UIPageControlVisualProvider : NSObject {

	UIPageControl* _pageControl;
	long long _displayedPage;
	long long _interactionState;

}

@property (nonatomic,readonly) long long displayedPage; 
@property (assign,nonatomic) long long interactionState;                     //@synthesize interactionState=_interactionState - In the implementation block
@property (nonatomic,retain) UIImage * preferredIndicatorImage; 
-(id)initWithPageControl:(id)arg1 ;
-(void)invalidateIndicators;
-(void)didUpdatePageIndicatorTintColor;
-(void)didUpdateAllowsContinuousInteraction;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)didUpdateCustomLayoutValues;
-(long long)displayedPage;
-(UIImage *)preferredIndicatorImage;
-(void)teardownPageControl;
-(void)setCustomIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(void)setInteractionState:(long long)arg1 ;
-(void)didUpdateNumberOfPages;
-(void)updateDisplayedPageToCurrentPage;
-(void)setPreferredIndicatorImage:(UIImage *)arg1 ;
-(void)pruneArchivedSubviews:(id)arg1 ;
-(void)didEndTrackingWithTouch:(id)arg1 ;
-(void)didUpdateCurrentPageIndicatorTintColor;
-(BOOL)shouldDisableTouchTracking;
-(CGSize)intrinsicContentSize;
-(long long)interactionState;
-(void)didUpdateBackgroundStyle;
-(id)customIndicatorImageForPage:(long long)arg1 ;
-(void)traitCollectionDidChangeOnSubtree:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepare;
@end

