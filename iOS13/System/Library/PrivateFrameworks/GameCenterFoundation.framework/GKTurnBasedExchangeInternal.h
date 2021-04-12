/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSArray, NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation {

	NSString* _exchangeID;
	NSArray* _recipientIndexes;
	NSString* _statusString;
	NSDictionary* _localizableMessage;
	NSData* _data;
	NSDate* _sendDate;
	NSDate* _timeoutDate;
	NSDate* _completionDate;
	NSArray* _replies;
	unsigned char _senderIndex;

}

@property (nonatomic,retain) NSString * exchangeID;                          //@synthesize exchangeID=_exchangeID - In the implementation block
@property (assign,nonatomic) unsigned char senderIndex;                      //@synthesize senderIndex=_senderIndex - In the implementation block
@property (nonatomic,retain) NSArray * recipientIndexes;                     //@synthesize recipientIndexes=_recipientIndexes - In the implementation block
@property (nonatomic,retain) NSString * statusString;                        //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * sendDate;                              //@synthesize sendDate=_sendDate - In the implementation block
@property (nonatomic,retain) NSDate * timeoutDate;                           //@synthesize timeoutDate=_timeoutDate - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                        //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,retain) NSArray * replies;                              //@synthesize replies=_replies - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSArray *)replies;
-(void)setReplies:(NSArray *)arg1 ;
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
-(NSDate *)timeoutDate;
-(NSDate *)sendDate;
-(void)setSendDate:(NSDate *)arg1 ;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(unsigned char)senderIndex;
-(NSArray *)recipientIndexes;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(NSString *)exchangeID;
-(void)setTimeoutDate:(NSDate *)arg1 ;
-(void)setExchangeID:(NSString *)arg1 ;
-(void)setSenderIndex:(unsigned char)arg1 ;
-(void)setRecipientIndexes:(NSArray *)arg1 ;
@end

