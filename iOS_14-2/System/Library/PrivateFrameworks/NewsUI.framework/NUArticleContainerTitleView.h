/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NUTitleView *)titleView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUPageStyle *)pageStyle;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(void)applyPageStyle:(id)arg1 ;
@end

