/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUICollectionConfiguration.h>

@class UICollectionViewCell;

@interface VUILibraryiOSMenuCollectionConfiguration : VUICollectionConfiguration {

	BOOL _isDesignedForIpadEnabled;
	UICollectionViewCell* _menuItemSizingCell;

}

@property (nonatomic,retain) UICollectionViewCell * menuItemSizingCell;              //@synthesize menuItemSizingCell=_menuItemSizingCell - In the implementation block
@property (assign,nonatomic) BOOL isDesignedForIpadEnabled;                          //@synthesize isDesignedForIpadEnabled=_isDesignedForIpadEnabled - In the implementation block
-(id)_layout;
-(id)init;
-(double)minimumLineSpacing;
-(UICollectionViewCell *)menuItemSizingCell;
-(void)setMenuItemSizingCell:(UICollectionViewCell *)arg1 ;
-(id)generateCollectionView;
-(id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3 ;
-(id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2 ;
-(Class)classForCollectionViewCell;
-(BOOL)isDesignedForIpadEnabled;
-(void)setIsDesignedForIpadEnabled:(BOOL)arg1 ;
@end

