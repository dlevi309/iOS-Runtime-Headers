/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentHistoryChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObjectID, NSDictionary, NSPersistentHistoryTransaction, NSData, NSSQLEntity;

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {

	long long _changeID;
	NSManagedObjectID* _changedObjectID;
	long long _changeType;
	NSDictionary* _tombstone;
	NSPersistentHistoryTransaction* _transaction;
	NSData* _columns;
	NSSQLEntity* _sqlEntity;
	NSManagedObjectID* _backingObjectID;

}
+(BOOL)supportsSecureCoding;
+(id)_updatedPropertiesForEntity:(id)arg1 andData:(id)arg2 ;
+(id)_propertyDataForEntity:(id)arg1 withSetOfPropertyNames:(id)arg2 ;
+(id)_dataMaskForEntity:(id)arg1 andDeltaMask:(CFBitVectorRef)arg2 ;
+(id)_mergeOldMask:(id)arg1 andNewMask:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(void)_setTransaction:(id)arg1 ;
-(id)changedObjectID;
-(id)tombstone;
-(id)transaction;
-(id)_backingObjectID;
-(id)initWithDictionary:(id)arg1 andChangeObjectID:(id)arg2 ;
-(long long)changeID;
-(id)updatedProperties;
@end

