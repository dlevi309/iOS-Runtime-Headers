/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUViewControllerCell.h>

@class UIViewController, NSString;

@interface HUViewControllerCollectionViewCell : UICollectionViewCell <HUViewControllerCell> {

	BOOL _allowSelfSizing;
	UIViewController* _viewController;
	UIViewController* _parentViewController;

}

@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) BOOL allowSelfSizing;                                        //@synthesize allowSelfSizing=_allowSelfSizing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * viewController;                           //@synthesize viewController=_viewController - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(UIViewController *)parentViewController;
-(void)removeFromParentViewController;
-(UIViewController *)viewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)addToParentViewController:(id)arg1 ;
-(void)_removeFromParentViewControllerAndClearProperty:(BOOL)arg1 ;
-(BOOL)allowSelfSizing;
-(void)setAllowSelfSizing:(BOOL)arg1 ;
@end

