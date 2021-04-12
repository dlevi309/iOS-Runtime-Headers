/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSNumber, NSDate, NSDictionary;

@interface EDSearchableIndexVerificationData : NSObject <NSCopying> {

	NSString* _subject;
	NSArray* _toEmailAddresses;
	NSString* _deleted;
	NSNumber* _transactionID;
	NSNumber* _flags;
	NSNumber* _indexedAsEmptySubject;
	NSDate* _dateReceived;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * subject;                              //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * toEmailAddresses;                      //@synthesize toEmailAddresses=_toEmailAddresses - In the implementation block
@property (nonatomic,copy) NSString * deleted;                              //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSNumber * transactionID;                      //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,retain) NSNumber * flags;                              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSNumber * indexedAsEmptySubject;              //@synthesize indexedAsEmptySubject=_indexedAsEmptySubject - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                         //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSNumber *)flags;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)deleted;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setFlags:(NSNumber *)arg1 ;
-(NSNumber *)transactionID;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(void)setDeleted:(NSString *)arg1 ;
-(NSDate *)dateReceived;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setToEmailAddresses:(NSArray *)arg1 ;
-(NSArray *)toEmailAddresses;
-(NSNumber *)indexedAsEmptySubject;
-(void)setIndexedAsEmptySubject:(NSNumber *)arg1 ;
@end

