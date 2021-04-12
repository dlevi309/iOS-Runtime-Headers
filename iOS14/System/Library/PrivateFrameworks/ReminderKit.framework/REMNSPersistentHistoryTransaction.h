/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMChangeTransaction.h>

@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction {

	_REMNSPersistentHistoryTransactionStorage* _storage;

}

@property (retain) _REMNSPersistentHistoryTransactionStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)changes;
-(id)storeID;
-(id)accountID;
-(id)initWithStorage:(id)arg1 ;
-(void)setStorage:(_REMNSPersistentHistoryTransactionStorage *)arg1 ;
-(id)author;
-(_REMNSPersistentHistoryTransactionStorage *)storage;
-(id)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)_resolveAccountID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)token;
-(BOOL)isEqual:(id)arg1 ;
@end

