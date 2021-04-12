/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/_PLThumbnailLoadingAsset.h>
#import <libobjc.A.dylib/PHFetchedObject.h>
#import <libobjc.A.dylib/PHThumbnailAsset.h>
@class NSManagedObjectID, PHPhotoLibrary;


@protocol PHThumbnailAsset <NSCopying,NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (nonatomic,readonly) BOOL complete; 
@property (nonatomic,readonly) long long cloudPlaceholderKind; 
@required
-(NSManagedObjectID *)objectID;
-(BOOL)complete;
-(PHPhotoLibrary *)photoLibrary;
-(unsigned long long)thumbnailIndex;
-(long long)cloudPlaceholderKind;

@end


@class NSManagedObjectID, PHPhotoLibrary, NSKnownKeysDictionary, NSString;

@interface PHThumbnailAsset : NSObject <_PLThumbnailLoadingAsset, PHFetchedObject, PHThumbnailAsset> {

	NSKnownKeysDictionary* _dictionary;
	unsigned short _firstPropertyIndex;
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
+(id)propertiesToFetch;
+(id)entityName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSManagedObjectID *)objectID;
-(BOOL)complete;
-(PHPhotoLibrary *)photoLibrary;
-(unsigned long long)effectiveThumbnailIndex;
-(unsigned long long)thumbnailIndex;
-(id)pl_photoLibrary;
-(long long)cloudPlaceholderKind;
-(id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 firstKeyIndex:(unsigned short)arg3 photoLibrary:(id)arg4 ;
@end

