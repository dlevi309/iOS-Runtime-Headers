/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutMarginsDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)addGutterViewBoundsObserver:(id)arg1 ;
-(void)removeGutterViewBoundsObserver:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

