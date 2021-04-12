/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMChangeCoalesceable.h>

@class REMChangeTransaction, REMObjectID, REMChangeTombstone, NSSet;

@interface REMChangeObject : NSObject <NSCopying, NSSecureCoding, REMChangeCoalesceable> {

	REMChangeTransaction* _transaction;
	long long _changeID;
	REMObjectID* _changedObjectID;
	long long _changeType;
	REMChangeTombstone* _tombstone;

}

@property (nonatomic,__weak,readonly) REMChangeTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) long long changeID;                                     //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,readonly) REMObjectID * changedObjectID;                          //@synthesize changedObjectID=_changedObjectID - In the implementation block
@property (nonatomic,readonly) long long changeType;                                   //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) REMChangeTombstone * tombstone;                         //@synthesize tombstone=_tombstone - In the implementation block
@property (nonatomic,readonly) NSSet * updatedProperties; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(REMObjectID *)changedObjectID;
-(REMChangeTombstone *)tombstone;
-(REMChangeTransaction *)transaction;
-(BOOL)isCoalesced;
-(long long)changeID;
-(NSSet *)updatedProperties;
-(id)coalescedChanges;
-(id)copyForCoalescing;
@end

