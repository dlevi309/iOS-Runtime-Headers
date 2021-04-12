/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

@class NSManagedObjectID;


@protocol PHFetchedObject <NSCopying,NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@required
+(id)propertiesToFetch;
+(id)entityName;
-(NSManagedObjectID *)objectID;
-(id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 firstKeyIndex:(unsigned short)arg3 photoLibrary:(id)arg4;

@end

