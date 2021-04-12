/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

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
-(long long)changeType;
-(id)transaction;
-(void)encodeWithCoder:(id)arg1 ;
-(id)changedObjectID;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeID;
-(id)updatedProperties;
-(id)tombstone;
-(void)dealloc;
@end

