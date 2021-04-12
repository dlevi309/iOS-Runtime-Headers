/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVProductCollectionViewCell : UICollectionViewCell {

	UIView* _titleView;
	UIEdgeInsets _activeMargins;
	BOOL _marginActive;
	UIViewController* _viewController;
	UIEdgeInsets _partialMargins;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets partialMargins;                           //@synthesize partialMargins=_partialMargins - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                  //@synthesize margins=_margins - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(id)titleView;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)setTitleView:(id)arg1 margins:(UIEdgeInsets)arg2 show:(BOOL)arg3 ;
-(void)showTitleView:(BOOL)arg1 ;
-(BOOL)isShowingTitleView;
-(void)enableWithMargins:(UIEdgeInsets)arg1 ;
-(void)disableMargins;
-(UIEdgeInsets)partialMargins;
-(void)setPartialMargins:(UIEdgeInsets)arg1 ;
@end

