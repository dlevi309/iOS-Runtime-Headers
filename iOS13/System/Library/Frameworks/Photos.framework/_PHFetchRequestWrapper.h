/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSFetchRequest, NSManagedObjectID, NSSet;

@interface _PHFetchRequestWrapper : NSObject <NSCopying> {

	unsigned long long _hash;
	NSFetchRequest* _fetchRequest;
	NSManagedObjectID* _containerIdentifier;
	NSSet* _fetchPropertySets;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                        //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) NSSet * fetchPropertySets;                            //@synthesize fetchPropertySets=_fetchPropertySets - In the implementation block
@property (nonatomic,readonly) unsigned long long hash;                              //@synthesize hash=_hash - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(NSManagedObjectID *)containerIdentifier;
-(NSSet *)fetchPropertySets;
-(id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2 fetchPropertySets:(id)arg3 ;
@end

