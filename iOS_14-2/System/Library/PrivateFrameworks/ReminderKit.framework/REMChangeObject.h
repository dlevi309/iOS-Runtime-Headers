/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)changeType;
-(BOOL)isCoalesced;
-(REMChangeTransaction *)transaction;
-(id)coalescedChanges;
-(id)copyForCoalescing;
-(void)encodeWithCoder:(id)arg1 ;
-(REMObjectID *)changedObjectID;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeID;
-(NSSet *)updatedProperties;
-(REMChangeTombstone *)tombstone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

