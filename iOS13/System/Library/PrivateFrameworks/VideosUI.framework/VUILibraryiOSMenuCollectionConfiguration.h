/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUICollectionConfiguration.h>

@class VUILibraryMenuItemViewCell;

@interface VUILibraryiOSMenuCollectionConfiguration : VUICollectionConfiguration {

	VUILibraryMenuItemViewCell* _menuItemSizingCell;

}

@property (nonatomic,retain) VUILibraryMenuItemViewCell * menuItemSizingCell;              //@synthesize menuItemSizingCell=_menuItemSizingCell - In the implementation block
-(double)minimumLineSpacing;
-(VUILibraryMenuItemViewCell *)menuItemSizingCell;
-(void)setMenuItemSizingCell:(VUILibraryMenuItemViewCell *)arg1 ;
-(id)generateCollectionView;
-(id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3 ;
-(id)configureSizingCellForItem:(id)arg1 ;
-(Class)classForCollectionViewCell;
@end

