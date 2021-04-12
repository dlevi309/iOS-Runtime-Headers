/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/_PLThumbnailLoadingAsset.h>
#import <libobjc.A.dylib/PHThumbnailAsset.h>
@class NSManagedObjectID, PHPhotoLibrary;


@protocol PHThumbnailAsset <NSCopying,NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (nonatomic,readonly) BOOL complete; 
@property (nonatomic,readonly) long long cloudPlaceholderKind; 
@required
-(PHPhotoLibrary *)photoLibrary;
-(unsigned long long)thumbnailIndex;
-(long long)cloudPlaceholderKind;
-(NSManagedObjectID *)objectID;
-(BOOL)complete;

@end

#import <libobjc.A.dylib/PHBatchFetchedPropertySet.h>

@class NSManagedObjectID, PHPhotoLibrary, NSKnownKeysDictionary, NSString;

@interface PHThumbnailAsset : NSObject <_PLThumbnailLoadingAsset, PHThumbnailAsset, PHBatchFetchedPropertySet> {

	NSKnownKeysDictionary* _dictionary;
	NSManagedObjectID* _objectID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectID * objectID;                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (nonatomic,readonly) BOOL complete; 
@property (nonatomic,readonly) long long cloudPlaceholderKind; 
+(id)entityName;
+(long long)batchSize;
+(long long)cacheSize;
+(BOOL)useObjectFetchingContext;
+(id)fetchType;
+(BOOL)useNoIndexSelf;
+(id)propertiesToSortBy;
+(id)propertiesToFetch;
-(PHPhotoLibrary *)photoLibrary;
-(unsigned long long)effectiveThumbnailIndex;
-(id)pl_photoLibrary;
-(unsigned long long)thumbnailIndex;
-(long long)cloudPlaceholderKind;
-(NSManagedObjectID *)objectID;
-(BOOL)complete;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

