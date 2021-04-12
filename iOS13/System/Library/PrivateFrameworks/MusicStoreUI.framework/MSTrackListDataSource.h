/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <MusicStoreUI/MSStructuredPageTableDataSource.h>

@interface MSTrackListDataSource : MSStructuredPageTableDataSource
-(long long)tableViewStyle;
-(id)headerViewForSection:(long long)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)placeholderCellForIndexPath:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)canDoubleTapIndexPath:(id)arg1 ;
-(double)heightForPlaceholderCells;
-(void)reloadCellContexts;
-(Class)cellConfigurationClassForItem:(id)arg1 ;
-(id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2 ;
-(BOOL)canShowItemOfferButtonForItem:(id)arg1 ;
-(BOOL)canShowPreviewForItem:(id)arg1 ;
-(id)_stylesheetString;
@end

