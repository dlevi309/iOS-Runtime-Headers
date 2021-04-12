/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	UIBarButtonItem* _staticBarButtonItem;
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
@property (nonatomic,retain) UIBarButtonItem * staticBarButtonItem;                     //@synthesize staticBarButtonItem=_staticBarButtonItem - In the implementation block
@property (nonatomic,copy) NSArray * cancelBarButtonItems;                              //@synthesize cancelBarButtonItems=_cancelBarButtonItems - In the implementation block
@property (nonatomic,copy) NSArray * otherBarButtonItems;                               //@synthesize otherBarButtonItems=_otherBarButtonItems - In the implementation block
-(UIView *)titleView;
-(id)init;
-(UINavigationItem *)topItem;
-(void)setTitleView:(UIView *)arg1 ;
-(UIView *)promptView;
-(void)setViewsRepresentingContentBackground:(NSArray *)arg1 ;
-(NSArray *)viewsRepresentingContentBackground;
-(void)setTopItem:(UINavigationItem *)arg1 ;
-(void)setBackItem:(UINavigationItem *)arg1 ;
-(void)setPromptView:(UIView *)arg1 ;
-(void)setViewsRepresentingBackButton:(NSArray *)arg1 ;
-(void)setCancelBarButtonItems:(NSArray *)arg1 ;
-(void)setOtherBarButtonItems:(NSArray *)arg1 ;
-(NSArray *)viewsRepresentingBackButton;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)staticBarButtonItem;
-(void)setStaticBarButtonItem:(UIBarButtonItem *)arg1 ;
-(NSArray *)cancelBarButtonItems;
-(NSArray *)otherBarButtonItems;
-(UIView *)largeTitleView;
-(void)setLargeTitleView:(UIView *)arg1 ;
-(UINavigationItem *)backItem;
-(UIBarButtonItem *)backBarButtonItem;
@end

