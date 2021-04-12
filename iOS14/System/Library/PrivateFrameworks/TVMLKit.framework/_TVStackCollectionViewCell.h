/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVStackCollectionViewCell : UICollectionViewCell {

	UIView* _cellContentView;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(BOOL)canBecomeFocused;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(UIViewController *)viewController;
@end

