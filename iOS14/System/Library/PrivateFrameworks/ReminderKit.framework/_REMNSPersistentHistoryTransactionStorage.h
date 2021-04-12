/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)changes;
-(NSString *)storeID;
-(REMObjectID *)accountID;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(NSString *)processID;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)contextName;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChanges:(NSArray *)arg1 ;
-(void)setTransactionNumber:(long long)arg1 ;
-(void)setContextName:(NSString *)arg1 ;
-(void)setToken:(REMNSPersistentHistoryToken *)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)setProcessID:(NSString *)arg1 ;
-(long long)transactionNumber;
-(REMNSPersistentHistoryToken *)token;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

