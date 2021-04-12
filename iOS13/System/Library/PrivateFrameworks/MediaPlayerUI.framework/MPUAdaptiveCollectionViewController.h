/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MPUFoundation/MPUDataSourceViewController.h>

@class NSMutableDictionary;

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController {

	UIEdgeInsets _contentInsetAdditions;
	UIEdgeInsets _scrollIndicatorInsetsAdditions;
	NSMutableDictionary* _sizeClassToClassMap;

}

@property (nonatomic,retain) NSMutableDictionary * sizeClassToClassMap;              //@synthesize sizeClassToClassMap=_sizeClassToClassMap - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)dataSourceDidInvalidate;
-(id)_childDataSourceViewController;
-(void)_updateViewControllerIfNecessary;
-(NSMutableDictionary *)sizeClassToClassMap;
-(void)setSizeClassToClassMap:(NSMutableDictionary *)arg1 ;
-(id)_indexPathOfTopVisibleItem;
-(void)_applyNewContentInsetAdditions:(UIEdgeInsets)arg1 withExistingContentInsetAdditions:(UIEdgeInsets)arg2 toScrollView:(id)arg3 ;
-(void)_applyNewScrollIndicatorInsetsAdditions:(UIEdgeInsets)arg1 withExistingScrollIndicatorInsetsAdditions:(UIEdgeInsets)arg2 toScrollView:(id)arg3 ;
-(void)_restoreTopVisibleIndexPath:(id)arg1 ;
-(void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2 ;
@end

