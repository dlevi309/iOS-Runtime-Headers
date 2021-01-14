/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUICollectionConfiguration.h>

@class VUILibraryMenuItemViewCell;

@interface VUILibraryGenresMenuCollectionConfiguration : VUICollectionConfiguration {

	VUILibraryMenuItemViewCell* _menuItemSizingCell;

}

@property (nonatomic,retain) VUILibraryMenuItemViewCell * menuItemSizingCell;              //@synthesize menuItemSizingCell=_menuItemSizingCell - In the implementation block
-(double)minimumLineSpacing;
-(VUILibraryMenuItemViewCell *)menuItemSizingCell;
-(void)setMenuItemSizingCell:(VUILibraryMenuItemViewCell *)arg1 ;
-(id)generateCollectionView;
-(id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3 ;
-(id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2 ;
-(Class)classForCollectionViewCell;
@end

