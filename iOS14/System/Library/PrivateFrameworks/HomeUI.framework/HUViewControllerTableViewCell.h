/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUViewControllerCell.h>

@class UIViewController, NSString;

@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell> {

	BOOL _ignoreRounding;
	UIViewController* _viewController;
	UIViewController* _parentViewController;

}

@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) BOOL ignoreRounding;                                         //@synthesize ignoreRounding=_ignoreRounding - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                           //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(UIViewController *)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIViewController *)parentViewController;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(void)removeFromParentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setIgnoreRounding:(BOOL)arg1 ;
-(void)addToParentViewController:(id)arg1 ;
-(void)_removeFromParentViewControllerAndClearProperty:(BOOL)arg1 ;
-(BOOL)ignoreRounding;
@end

