/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)fetchPropertySets;
-(NSFetchRequest *)fetchRequest;
-(NSManagedObjectID *)containerIdentifier;
-(unsigned long long)hash;
-(id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2 fetchPropertySets:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

