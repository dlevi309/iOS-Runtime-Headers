/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>
#import <libobjc.A.dylib/PLIndexMapperDataSource.h>

@class PLFilteredAlbumList, NSIndexSet, PLIndexMapper, PLAssetContainerListChangeNotification, NSString;

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification <PLIndexMapperDataSource> {

	PLFilteredAlbumList* _albumList;
	NSIndexSet* _oldFilteredIndexes;
	NSIndexSet* _filteredIndexes;
	PLIndexMapper* _indexMapper;
	PLAssetContainerListChangeNotification* _backingNotification;

}

@property (nonatomic,retain,readonly) NSIndexSet * updatedFilteredIndexes; 
@property (nonatomic,copy) NSIndexSet * filteredIndexes; 
@property (nonatomic,retain,readonly) PLIndexMapper * indexMapper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(id)init;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(PLIndexMapper *)indexMapper;
-(id)object;
-(BOOL)shouldReload;
-(NSIndexSet *)filteredIndexes;
-(NSString *)description;
-(id)albumList;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_diffDescription;
-(BOOL)countDidChange;
-(NSIndexSet *)updatedFilteredIndexes;
-(void)setFilteredIndexes:(NSIndexSet *)arg1 ;
-(id)_changedObjects;
-(id)initWithFilteredAlbumList:(id)arg1 albumListChangeNotification:(id)arg2 ;
@end

