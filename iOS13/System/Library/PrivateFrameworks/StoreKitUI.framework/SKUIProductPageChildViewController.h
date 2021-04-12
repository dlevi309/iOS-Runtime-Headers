/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

@class UIScrollView, SKUIProductPageHeaderViewController;


@protocol SKUIProductPageChildViewController <NSObject>
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate; 
@required
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIScrollView *)scrollView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(id)arg1;

@end

