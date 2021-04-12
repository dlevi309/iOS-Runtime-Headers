/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class IKViewElement, _TVCollectionView, NSArray, IKImageElement, NSIndexPath, NSString;

@interface _TVAlertTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UICollectionViewDataSource> {

	IKViewElement* _templateElement;
	_TVCollectionView* _collectionView;
	NSArray* _collectionViewElements;
	IKImageElement* _bgImageElement;
	IKImageElement* _bgHeroImageElement;
	NSIndexPath* _lastFocusedIndexPath;
	BOOL _updateAutoHighlight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)preferredFocusEnvironments;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)_blurEffectStyle;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)updateWithTemplateElement:(id)arg1 ;
-(void)_scrollToPreferredFocusView;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
@end

