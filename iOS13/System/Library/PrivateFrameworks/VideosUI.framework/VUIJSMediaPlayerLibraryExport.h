/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIJSMediaPlayerLibraryExport <JSExport>
@required
-(BOOL)setFilter:(id)arg1;
-(id)getItems;
-(id)findItemByPersistentIdentifier:(id)arg1 :(id)arg2;
-(id)findItemByStoreIdentifier:(id)arg1 :(id)arg2;
-(BOOL)getIsUpdateInProgress;
-(BOOL)getIsInitialImport;
-(void)getImageForItem:(id)arg1 :(id)arg2 :(id)arg3;
-(id)getItem:(id)arg1 :(id)arg2;
-(unsigned long long)getItemCount;
-(id)getShowIdentifierForStoreIdentifier:(id)arg1;
-(id)getItemWithChildren:(id)arg1 :(id)arg2;
-(void)getUpdateProgress:(id)arg1;
-(BOOL)libraryHasMedia;
-(void)setFilterAsync:(id)arg1 :(id)arg2;
-(long long)queryHasItemCount:(id)arg1;
-(void)fetchMediaEntitiesWithOptions:(id)arg1 :(id)arg2;
-(BOOL)isHDRCapable;

@end

