/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMChangeTransaction.h>

@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction {

	_REMNSPersistentHistoryTransactionStorage* _storage;

}

@property (retain) _REMNSPersistentHistoryTransactionStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)token;
-(_REMNSPersistentHistoryTransactionStorage *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)timestamp;
-(id)changes;
-(void)setStorage:(_REMNSPersistentHistoryTransactionStorage *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)author;
-(id)accountID;
-(id)storeID;
-(void)_resolveAccountID:(id)arg1 ;
@end

