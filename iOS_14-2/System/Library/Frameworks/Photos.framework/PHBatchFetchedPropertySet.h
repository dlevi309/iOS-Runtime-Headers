/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

@class NSManagedObjectID;


@protocol PHBatchFetchedPropertySet <NSCopying,NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@required
+(id)entityName;
+(long long)batchSize;
+(long long)cacheSize;
+(BOOL)useObjectFetchingContext;
+(id)fetchType;
+(BOOL)useNoIndexSelf;
+(id)propertiesToSortBy;
+(id)propertiesToFetch;
-(NSManagedObjectID *)objectID;
-(id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3;

@end

