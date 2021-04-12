/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NNMKProtoMoreMessagesRequest : PBRequest <NSCopying> {

	NSData* _beforeDateReceived;
	unsigned _filterType;
	unsigned _fullSyncVersion;
	NSString* _mailboxId;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                  //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasBeforeDateReceived; 
@property (nonatomic,retain) NSData * beforeDateReceived;               //@synthesize beforeDateReceived=_beforeDateReceived - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                      //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasFilterType; 
@property (assign,nonatomic) unsigned filterType;                       //@synthesize filterType=_filterType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)filterType;
-(void)setFilterType:(unsigned)arg1 ;
-(void)setHasFilterType:(BOOL)arg1 ;
-(BOOL)hasFilterType;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(BOOL)hasMailboxId;
-(void)setBeforeDateReceived:(NSData *)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(BOOL)hasBeforeDateReceived;
-(unsigned)fullSyncVersion;
-(NSData *)beforeDateReceived;
@end

