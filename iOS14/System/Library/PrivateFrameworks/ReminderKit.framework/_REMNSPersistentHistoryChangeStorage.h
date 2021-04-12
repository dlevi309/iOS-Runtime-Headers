/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID, REMNSPersistentHistoryChangeTombstone, NSSet;

@interface _REMNSPersistentHistoryChangeStorage : NSObject <NSSecureCoding> {

	long long _changeID;
	REMObjectID* _changedObjectID;
	long long _changeType;
	REMNSPersistentHistoryChangeTombstone* _tombstone;
	NSSet* _updatedProperties;

}

@property (assign,nonatomic) long long changeID;                                           //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,copy) REMObjectID * changedObjectID;                                  //@synthesize changedObjectID=_changedObjectID - In the implementation block
@property (assign,nonatomic) long long changeType;                                         //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy) REMNSPersistentHistoryChangeTombstone * tombstone;              //@synthesize tombstone=_tombstone - In the implementation block
@property (nonatomic,copy) NSSet * updatedProperties;                                      //@synthesize updatedProperties=_updatedProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(void)setChangedObjectID:(REMObjectID *)arg1 ;
-(void)setTombstone:(REMNSPersistentHistoryChangeTombstone *)arg1 ;
-(void)setUpdatedProperties:(NSSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(REMObjectID *)changedObjectID;
-(void)setChangeID:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeID;
-(NSSet *)updatedProperties;
-(REMNSPersistentHistoryChangeTombstone *)tombstone;
-(BOOL)isEqual:(id)arg1 ;
@end

