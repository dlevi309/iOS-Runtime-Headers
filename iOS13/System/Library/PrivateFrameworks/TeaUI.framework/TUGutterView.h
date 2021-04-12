/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@interface TUGutterView : UIScrollView {

	 contentView;
	 childScrollView;
	 gutters;
	 observations;
	 boundsObservers;

}

@property (assign,nonatomic) CGPoint contentOffset; 
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)addGutterViewBoundsObserver:(id)arg1 ;
-(void)removeGutterViewBoundsObserver:(id)arg1 ;
@end

