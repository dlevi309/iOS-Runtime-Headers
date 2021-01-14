/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLThumbPersistenceManager;
@class NSMutableArray, NSString;

@interface PLTemporaryImageTable : NSObject {

	id<PLThumbPersistenceManager> _imageTable;
	unsigned long long _nextTableEntryIndex;
	NSMutableArray* _itemIndexToThumbEntryMapping;
	NSString* _imageTablePath;
	unsigned short _imageFormat;

}
-(void)_cleanup;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(void)reset;
-(id)initWithWithPath:(id)arg1 imageFormat:(unsigned short)arg2 ;
-(void)_positional_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4 ;
-(unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1 ;
-(id)imageForItemAtIndex:(unsigned long long)arg1 ;
-(void)insertItemAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

