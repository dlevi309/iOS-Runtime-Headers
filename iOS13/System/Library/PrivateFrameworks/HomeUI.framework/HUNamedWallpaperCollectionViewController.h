/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>

@protocol HUNamedWallpaperCollectionViewControllerDelegate;
@class NSArray, NSMutableDictionary;

@interface HUNamedWallpaperCollectionViewController : UICollectionViewController {

	id<HUNamedWallpaperCollectionViewControllerDelegate> _delegate;
	long long _collectionType;
	NSArray* _wallpapers;
	NSMutableDictionary* _wallpaperImageCache;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                                                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) NSArray * wallpapers;                                                                //@synthesize wallpapers=_wallpapers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * wallpaperImageCache;                                           //@synthesize wallpaperImageCache=_wallpaperImageCache - In the implementation block
@property (nonatomic,__weak,readonly) id<HUNamedWallpaperCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long collectionType;                                                          //@synthesize collectionType=_collectionType - In the implementation block
-(id<HUNamedWallpaperCollectionViewControllerDelegate>)delegate;
-(UIEdgeInsets)edgeInsets;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionType;
-(NSArray *)wallpapers;
-(void)setWallpapers:(NSArray *)arg1 ;
-(id)initWithCollectionType:(long long)arg1 horizontalInset:(double)arg2 delegate:(id)arg3 ;
-(NSMutableDictionary *)wallpaperImageCache;
-(void)setWallpaperImageCache:(NSMutableDictionary *)arg1 ;
@end

