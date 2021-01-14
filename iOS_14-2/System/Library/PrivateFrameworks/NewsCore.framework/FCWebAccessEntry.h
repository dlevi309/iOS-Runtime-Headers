/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSDate;

@interface FCWebAccessEntry : NSObject {

	NSString* _email;
	NSString* _purchaseID;
	NSString* _purchaseReceipt;
	NSDate* _lastRetryAttemptTime;
	NSString* _identifier;
	NSString* _tagID;

}

@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * tagID;                           //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                      //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * email;                           //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * purchaseReceipt;                 //@synthesize purchaseReceipt=_purchaseReceipt - In the implementation block
@property (nonatomic,copy) NSDate * lastRetryAttemptTime;              //@synthesize lastRetryAttemptTime=_lastRetryAttemptTime - In the implementation block
-(id)dictionaryRepresentation;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)tagID;
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSString *)purchaseID;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(NSString *)purchaseReceipt;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastRetryAttemptTime:(id)arg4 email:(id)arg5 purchaseReceipt:(id)arg6 ;
-(NSString *)identifier;
-(void)setTagID:(NSString *)arg1 ;
-(NSString *)email;
-(NSDate *)lastRetryAttemptTime;
-(void)setPurchaseReceipt:(NSString *)arg1 ;
-(void)setLastRetryAttemptTime:(NSDate *)arg1 ;
@end

