/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoMailbox : PBCodable <NSCopying> {

	NSString* _accountId;
	NSString* _customName;
	unsigned _filterType;
	NSString* _mailboxId;
	unsigned _type;
	BOOL _syncEnabled;
	BOOL _syncRequested;
	SCD_Struct_NN5 _has;

}

@property (nonatomic,readonly) BOOL hasAccountId; 
@property (nonatomic,retain) NSString * accountId;               //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;               //@synthesize mailboxId=_mailboxId - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomName; 
@property (nonatomic,retain) NSString * customName;              //@synthesize customName=_customName - In the implementation block
@property (assign,nonatomic) BOOL hasFilterType; 
@property (assign,nonatomic) unsigned filterType;                //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) BOOL hasSyncEnabled; 
@property (assign,nonatomic) BOOL syncEnabled;                   //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSyncRequested; 
@property (assign,nonatomic) BOOL syncRequested;                 //@synthesize syncRequested=_syncRequested - In the implementation block
+(id)protoMailboxFromMailbox:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)filterType;
-(void)setFilterType:(unsigned)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(id)mailbox;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(BOOL)syncEnabled;
-(BOOL)hasAccountId;
-(void)setHasFilterType:(BOOL)arg1 ;
-(BOOL)hasFilterType;
-(void)setCustomName:(NSString *)arg1 ;
-(BOOL)hasCustomName;
-(NSString *)customName;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(BOOL)hasMailboxId;
-(void)setHasSyncEnabled:(BOOL)arg1 ;
-(BOOL)hasSyncEnabled;
-(void)setSyncRequested:(BOOL)arg1 ;
-(void)setHasSyncRequested:(BOOL)arg1 ;
-(BOOL)hasSyncRequested;
-(BOOL)syncRequested;
@end

