/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NNMKProtoFetchRequest : PBRequest <NSCopying> {

	NSString* _conversationId;
	NSData* _currentDateForRequestingMoreMessages;
	NSData* _currentMessageIdsAndStatus;
	unsigned _fullSyncVersion;
	NSString* _mailboxId;
	BOOL _wantsBatchedResponse;
	BOOL _willTrimDatabaseAfterResults;
	SCD_Struct_NN4 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                                    //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasConversationId; 
@property (nonatomic,retain) NSString * conversationId;                                   //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL hasWantsBatchedResponse; 
@property (assign,nonatomic) BOOL wantsBatchedResponse;                                   //@synthesize wantsBatchedResponse=_wantsBatchedResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentMessageIdsAndStatus; 
@property (nonatomic,retain) NSData * currentMessageIdsAndStatus;                         //@synthesize currentMessageIdsAndStatus=_currentMessageIdsAndStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentDateForRequestingMoreMessages; 
@property (nonatomic,retain) NSData * currentDateForRequestingMoreMessages;               //@synthesize currentDateForRequestingMoreMessages=_currentDateForRequestingMoreMessages - In the implementation block
@property (assign,nonatomic) BOOL hasWillTrimDatabaseAfterResults; 
@property (assign,nonatomic) BOOL willTrimDatabaseAfterResults;                           //@synthesize willTrimDatabaseAfterResults=_willTrimDatabaseAfterResults - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                                        //@synthesize mailboxId=_mailboxId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)conversationId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(BOOL)hasMailboxId;
-(BOOL)hasConversationId;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(BOOL)wantsBatchedResponse;
-(NSData *)currentDateForRequestingMoreMessages;
-(void)setCurrentDateForRequestingMoreMessages:(NSData *)arg1 ;
-(void)setWillTrimDatabaseAfterResults:(BOOL)arg1 ;
-(BOOL)willTrimDatabaseAfterResults;
-(void)setWantsBatchedResponse:(BOOL)arg1 ;
-(void)setHasWantsBatchedResponse:(BOOL)arg1 ;
-(BOOL)hasWantsBatchedResponse;
-(NSData *)currentMessageIdsAndStatus;
-(void)setCurrentMessageIdsAndStatus:(NSData *)arg1 ;
-(BOOL)hasCurrentMessageIdsAndStatus;
-(BOOL)hasCurrentDateForRequestingMoreMessages;
-(void)setHasWillTrimDatabaseAfterResults:(BOOL)arg1 ;
-(BOOL)hasWillTrimDatabaseAfterResults;
@end

