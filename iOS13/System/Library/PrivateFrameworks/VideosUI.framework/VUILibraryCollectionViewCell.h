/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

@interface VUILibraryCollectionViewCell : UICollectionViewCell {

	UIViewController* _viewController;
	VUISeparatorView* _topSeparatorView;

}

@property (nonatomic,retain) UIViewController * viewController;                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;              //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(VUISeparatorView *)topSeparatorView;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
@end

