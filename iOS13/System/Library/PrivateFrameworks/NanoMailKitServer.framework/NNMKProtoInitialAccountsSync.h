/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoInitialAccountsSync : PBCodable <NSCopying> {

	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSMutableArray* _initialAccounts;
	NSString* _initialSyncVersion;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,retain) NSMutableArray * initialAccounts;              //@synthesize initialAccounts=_initialAccounts - In the implementation block
@property (nonatomic,readonly) BOOL hasInitialSyncVersion; 
@property (nonatomic,retain) NSString * initialSyncVersion;                 //@synthesize initialSyncVersion=_initialSyncVersion - In the implementation block
@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                      //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                           //@synthesize dateSynced=_dateSynced - In the implementation block
+(Class)initialAccountType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(NSData *)dateSynced;
-(void)addInitialAccount:(id)arg1 ;
-(unsigned long long)initialAccountsCount;
-(void)clearInitialAccounts;
-(id)initialAccountAtIndex:(unsigned long long)arg1 ;
-(void)setInitialSyncVersion:(NSString *)arg1 ;
-(BOOL)hasInitialSyncVersion;
-(NSMutableArray *)initialAccounts;
-(void)setInitialAccounts:(NSMutableArray *)arg1 ;
-(NSString *)initialSyncVersion;
@end

