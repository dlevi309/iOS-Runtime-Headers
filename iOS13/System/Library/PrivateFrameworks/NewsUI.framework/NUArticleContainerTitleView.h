/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NUTitleView, NUPageStyle;

@interface NUArticleContainerTitleView : UIView {

	NUTitleView* _titleView;
	NUPageStyle* _pageStyle;

}

@property (nonatomic,readonly) NUTitleView * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NUPageStyle * pageStyle;                //@synthesize pageStyle=_pageStyle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUTitleView *)titleView;
-(NUPageStyle *)pageStyle;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(void)applyPageStyle:(id)arg1 ;
@end

