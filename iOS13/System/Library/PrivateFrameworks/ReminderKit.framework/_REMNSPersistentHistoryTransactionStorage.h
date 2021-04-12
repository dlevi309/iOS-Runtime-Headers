/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSString, REMNSPersistentHistoryToken, REMObjectID;

@interface _REMNSPersistentHistoryTransactionStorage : NSObject <NSSecureCoding> {

	NSDate* _timestamp;
	NSArray* _changes;
	long long _transactionNumber;
	NSString* _storeID;
	NSString* _bundleID;
	NSString* _processID;
	NSString* _contextName;
	NSString* _author;
	REMNSPersistentHistoryToken* _token;
	REMObjectID* _accountID;

}

@property (nonatomic,copy) NSDate * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSArray * changes;                                  //@synthesize changes=_changes - In the implementation block
@property (assign,nonatomic) long long transactionNumber;                      //@synthesize transactionNumber=_transactionNumber - In the implementation block
@property (nonatomic,copy) NSString * storeID;                                 //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * processID;                               //@synthesize processID=_processID - In the implementation block
@property (nonatomic,copy) NSString * contextName;                             //@synthesize contextName=_contextName - In the implementation block
@property (nonatomic,copy) NSString * author;                                  //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) REMNSPersistentHistoryToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) REMObjectID * accountID;                            //@synthesize accountID=_accountID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(REMNSPersistentHistoryToken *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(NSArray *)changes;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setToken:(REMNSPersistentHistoryToken *)arg1 ;
-(REMObjectID *)accountID;
-(void)setContextName:(NSString *)arg1 ;
-(NSString *)storeID;
-(long long)transactionNumber;
-(NSString *)processID;
-(NSString *)contextName;
-(void)setTransactionNumber:(long long)arg1 ;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(void)setChanges:(NSArray *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setProcessID:(NSString *)arg1 ;
@end

