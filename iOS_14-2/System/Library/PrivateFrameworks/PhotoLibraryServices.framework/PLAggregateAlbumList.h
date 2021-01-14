/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {

	NSMutableOrderedSet* _allAlbums;
	NSMutableOrderedSet* _childAlbumLists;
	int _filter;

}

@property (assign,nonatomic) int filter;                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(BOOL)albumHasFixedOrder:(id)arg1 ;
-(id)containers;
-(id)albums;
-(BOOL)hasAtLeastOneAlbum;
-(void)setNeedsReordering;
-(NSString *)_prettyDescription;
-(NSString *)_typeDescription;
-(BOOL)needsReordering;
-(unsigned long long)albumsCount;
-(unsigned long long)containersCount;
-(id)managedObjectContext;
-(unsigned long long)unreadAlbumsCount;
-(BOOL)canEditContainers;
-(BOOL)canEditAlbums;
-(void)updateAlbumsOrderIfNeeded;
-(void)setFilter:(int)arg1 ;
-(int)filter;
-(id)containersRelationshipName;
-(id)photoLibrary;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(short)albumListType;
-(BOOL)isFolder;
-(id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_invalidateAllAlbums;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)identifier;
-(BOOL)isEmpty;
-(id)albumsSortingComparator;
-(void)dealloc;
@end

