/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHBatchFetchedPropertySet.h>

@class NSManagedObjectID, NSKnownKeysDictionary, NSString;

@interface PHBatchFetchedAssetPropertySet : NSObject <PHBatchFetchedPropertySet> {

	NSManagedObjectID* _objectID;
	NSKnownKeysDictionary* _knownKeysDictionary;

}

@property (nonatomic,readonly) NSKnownKeysDictionary * knownKeysDictionary;              //@synthesize knownKeysDictionary=_knownKeysDictionary - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                             //@synthesize objectID=_objectID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(long long)batchSize;
+(long long)cacheSize;
+(BOOL)useObjectFetchingContext;
+(id)fetchType;
+(BOOL)useNoIndexSelf;
+(id)propertiesToSortBy;
+(id)propertiesToFetch;
-(NSManagedObjectID *)objectID;
-(NSKnownKeysDictionary *)knownKeysDictionary;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3 ;
@end

