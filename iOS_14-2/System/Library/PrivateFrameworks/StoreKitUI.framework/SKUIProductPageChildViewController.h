/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(id)arg1;
-(UIScrollView *)scrollView;

@end

