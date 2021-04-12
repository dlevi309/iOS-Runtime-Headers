/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UILabel, UICollectionViewFlowLayout, UICollectionView, NSArray, NSString;

@interface VUIAppsGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate> {

	UILabel* _titleLabel;
	UICollectionViewFlowLayout* _layout;
	UICollectionView* _collectionView;
	NSArray* _apps;

}

@property (nonatomic,copy) NSArray * apps;                          //@synthesize apps=_apps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTitle:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)apps;
-(void)setApps:(NSArray *)arg1 ;
-(Class)_collectionViewClass;
@end

