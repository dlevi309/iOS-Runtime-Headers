/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString;


@protocol PLAlbumContainer <PLAssetContainerList>
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@required
-(BOOL)albumHasFixedOrder:(id)arg1;
-(id)albums;
-(BOOL)hasAtLeastOneAlbum;
-(void)setNeedsReordering;
-(NSString *)_prettyDescription;
-(NSString *)_typeDescription;
-(BOOL)needsReordering;
-(unsigned long long)albumsCount;
-(unsigned long long)unreadAlbumsCount;
-(BOOL)canEditAlbums;
-(void)updateAlbumsOrderIfNeeded;
-(int)filter;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
-(short)albumListType;
-(BOOL)isFolder;
-(id)identifier;
-(id)albumsSortingComparator;

@end

