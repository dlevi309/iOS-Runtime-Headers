/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation {

	NSDictionary* _localizableMessage;
	NSData* _data;
	NSDate* _replyDate;
	unsigned char _recipientIndex;

}

@property (assign,nonatomic) unsigned char recipientIndex;                   //@synthesize recipientIndex=_recipientIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * replyDate;                             //@synthesize replyDate=_replyDate - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)dealloc;
-(unsigned char)recipientIndex;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(void)setRecipientIndex:(unsigned char)arg1 ;
-(NSDate *)replyDate;
-(void)setReplyDate:(NSDate *)arg1 ;
@end

