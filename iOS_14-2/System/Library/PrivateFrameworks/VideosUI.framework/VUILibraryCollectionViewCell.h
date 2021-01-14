/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setViewController:(UIViewController *)arg1 ;
-(void)prepareForReuse;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(UIViewController *)viewController;
@end

