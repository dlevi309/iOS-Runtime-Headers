/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSManagedObjectID;

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying> {

	NSString* _storeName;
	NSString* _entityName;
	NSString* _primaryKey;
	NSString* _owningPeerID;
	unsigned long long _hash;
	NSManagedObjectID* _managedObjectID;
	unsigned long long _primaryKeyInteger;

}

@property (nonatomic,readonly) NSString * storeName;                              //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                             //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSString * primaryKey;                             //@synthesize primaryKey=_primaryKey - In the implementation block
@property (nonatomic,readonly) NSString * owningPeerID;                           //@synthesize owningPeerID=_owningPeerID - In the implementation block
@property (nonatomic,readonly) unsigned long long hash;                           //@synthesize hash=_hash - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * managedObjectID;                 //@synthesize managedObjectID=_managedObjectID - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryKeyInteger;              //@synthesize primaryKeyInteger=_primaryKeyInteger - In the implementation block
-(NSString *)primaryKey;
-(void)updateHash;
-(NSString *)entityName;
-(id)initWithString:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initFromCopyWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 peerID:(id)arg4 andHash:(unsigned long long)arg5 managedObjectID:(id)arg6 primaryKeyInteger:(unsigned long long)arg7 ;
-(NSString *)storeName;
-(id)init;
-(NSString *)owningPeerID;
-(NSManagedObjectID *)managedObjectID;
-(void)setManagedObjectID:(NSManagedObjectID *)arg1 ;
-(id)createGlobalIDString;
-(id)description;
-(unsigned long long)primaryKeyInteger;
-(id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKeyInteger:(unsigned long long)arg3 andPeerID:(id)arg4 ;
-(id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 andPeerID:(id)arg4 ;
-(id)initWithCompressedString:(id)arg1 forStoreWithName:(id)arg2 andEntityNames:(id)arg3 primaryKeys:(id)arg4 peerIDs:(id)arg5 ;
-(id)createCompressedStringWithEntityNameToIndex:(id)arg1 primaryKeyToIndex:(id)arg2 peerIDToIndex:(id)arg3 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

