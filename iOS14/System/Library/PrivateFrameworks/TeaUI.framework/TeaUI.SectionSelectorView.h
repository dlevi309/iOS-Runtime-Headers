/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@interface TeaUI.SectionSelectorView : UIView <UIScrollViewDelegate> {

	 spacing;
	 minWidth;
	 maxWidth;
	 defaultInset;
	 height;
	 textAlpha;
	 highlightedTextAlpha;
	 selectedTextAlpha;
	 delegate;
	 dataSource;
	 textColor;
	 selectedIndex;
	 scrollView;
	 buttons;
	 unselectedButtonFont;
	 selectedButtonFont;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
@end

