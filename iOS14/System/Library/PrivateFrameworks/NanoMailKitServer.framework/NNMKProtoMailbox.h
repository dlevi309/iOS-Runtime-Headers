/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _url;
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
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                     //@synthesize url=_url - In the implementation block
+(id)protoMailboxFromMailbox:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)filterType;
-(void)setFilterType:(unsigned)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)syncEnabled;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(NSString *)url;
-(void)setAccountId:(NSString *)arg1 ;
-(id)mailbox;
-(void)setHasFilterType:(BOOL)arg1 ;
-(BOOL)hasFilterType;
-(id)description;
-(NSString *)customName;
-(BOOL)hasUrl;
-(void)setCustomName:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned)type;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)accountId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCustomName;
-(BOOL)hasAccountId;
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

