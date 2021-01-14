/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(long long)_blurEffectStyle;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)updateWithTemplateElement:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_scrollToPreferredFocusView;
@end

