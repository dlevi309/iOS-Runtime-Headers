/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UINavigationItem, NSArray, UIView, UIBarButtonItem;

@interface _UINavigationBarContents : NSObject {

	UINavigationItem* _topItem;
	UINavigationItem* _backItem;
	NSArray* _viewsRepresentingBackButton;
	UIView* _titleView;
	UIView* _largeTitleView;
	UIView* _promptView;
	UIBarButtonItem* _backBarButtonItem;
	NSArray* _cancelBarButtonItems;
	NSArray* _otherBarButtonItems;
	NSArray* _viewsRepresentingContentBackground;

}

@property (nonatomic,retain) NSArray * viewsRepresentingContentBackground;              //@synthesize viewsRepresentingContentBackground=_viewsRepresentingContentBackground - In the implementation block
@property (nonatomic,retain) UINavigationItem * topItem;                                //@synthesize topItem=_topItem - In the implementation block
@property (nonatomic,retain) UINavigationItem * backItem;                               //@synthesize backItem=_backItem - In the implementation block
@property (nonatomic,copy) NSArray * viewsRepresentingBackButton;                       //@synthesize viewsRepresentingBackButton=_viewsRepresentingBackButton - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                        //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIView * largeTitleView;                                   //@synthesize largeTitleView=_largeTitleView - In the implementation block
@property (nonatomic,retain) UIView * promptView;                                       //@synthesize promptView=_promptView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                       //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,copy) NSArray * cancelBarButtonItems;                              //@synthesize cancelBarButtonItems=_cancelBarButtonItems - In the implementation block
@property (nonatomic,copy) NSArray * otherBarButtonItems;                               //@synthesize otherBarButtonItems=_otherBarButtonItems - In the implementation block
-(id)init;
-(void)setViewsRepresentingBackButton:(NSArray *)arg1 ;
-(void)setCancelBarButtonItems:(NSArray *)arg1 ;
-(void)setOtherBarButtonItems:(NSArray *)arg1 ;
-(void)setViewsRepresentingContentBackground:(NSArray *)arg1 ;
-(UINavigationItem *)topItem;
-(void)setTopItem:(UINavigationItem *)arg1 ;
-(UINavigationItem *)backItem;
-(void)setBackItem:(UINavigationItem *)arg1 ;
-(NSArray *)viewsRepresentingBackButton;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(UIView *)largeTitleView;
-(void)setLargeTitleView:(UIView *)arg1 ;
-(UIView *)promptView;
-(void)setPromptView:(UIView *)arg1 ;
-(UIBarButtonItem *)backBarButtonItem;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(NSArray *)cancelBarButtonItems;
-(NSArray *)otherBarButtonItems;
-(NSArray *)viewsRepresentingContentBackground;
@end

