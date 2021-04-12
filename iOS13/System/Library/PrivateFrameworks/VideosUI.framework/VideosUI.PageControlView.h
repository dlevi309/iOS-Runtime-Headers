/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUIPageControlView.h>

@interface VideosUI.PageControlView : UIView <VUIPageControlView> {

	 currentPageDidChange;
	 capMargin;
	 pageControlBackgroundColor;
	 currentPageIndicatorTintColor;
	 pageIndicatorTintColor;
	 pageControlType;
	 adaptivePageControlView;
	 roundedPageControlView;

}

@property (copy,nonatomic) id currentPageDidChange; 
@property (readonly,nonatomic) long long numberOfPages; 
-(void)roundedControlPageChangeEventWithSender:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(long long)numberOfPages;
-(void)setCurrentPageDidChange:(id)arg1 ;
-(void)moveToPage:(long long)arg1 ;
-(id)currentPageDidChange;
-(void)addNumberOfPages:(long long)arg1 ;
@end

