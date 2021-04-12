/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDWiFiNWActivityTxCompletions, NSString;

@interface AWDWiFiNWActivityPeerStats : PBCodable <NSCopying> {

	NSMutableArray* _acCompletions;
	NSMutableArray* _bytes;
	NSMutableArray* _ccas;
	AWDWiFiNWActivityTxCompletions* _completions;
	NSString* _hashID;
	NSMutableArray* _packets;
	int _role;
	NSMutableArray* _rssis;
	NSMutableArray* _snrs;
	NSMutableArray* _txLatencyBEs;
	NSMutableArray* _txLatencyBKs;
	NSMutableArray* _txLatencyVIs;
	NSMutableArray* _txLatencyVOs;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role;                                                  //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) BOOL hasHashID; 
@property (nonatomic,retain) NSString * hashID;                                         //@synthesize hashID=_hashID - In the implementation block
@property (nonatomic,retain) NSMutableArray * rssis;                                    //@synthesize rssis=_rssis - In the implementation block
@property (nonatomic,retain) NSMutableArray * ccas;                                     //@synthesize ccas=_ccas - In the implementation block
@property (nonatomic,retain) NSMutableArray * snrs;                                     //@synthesize snrs=_snrs - In the implementation block
@property (nonatomic,retain) NSMutableArray * packets;                                  //@synthesize packets=_packets - In the implementation block
@property (nonatomic,retain) NSMutableArray * bytes;                                    //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyBKs;                             //@synthesize txLatencyBKs=_txLatencyBKs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyBEs;                             //@synthesize txLatencyBEs=_txLatencyBEs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyVOs;                             //@synthesize txLatencyVOs=_txLatencyVOs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyVIs;                             //@synthesize txLatencyVIs=_txLatencyVIs - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletions; 
@property (nonatomic,retain) AWDWiFiNWActivityTxCompletions * completions;              //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSMutableArray * acCompletions;                            //@synthesize acCompletions=_acCompletions - In the implementation block
+(Class)snrType;
+(Class)packetsType;
+(Class)bytesType;
+(Class)rssiType;
+(Class)ccaType;
+(Class)txLatencyBKType;
+(Class)txLatencyBEType;
+(Class)txLatencyVOType;
+(Class)txLatencyVIType;
+(Class)acCompletionsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bytesAtIndex:(unsigned long long)arg1 ;
-(int)role;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(AWDWiFiNWActivityTxCompletions *)completions;
-(void)setCompletions:(AWDWiFiNWActivityTxCompletions *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addBytes:(id)arg1 ;
-(void)setRole:(int)arg1 ;
-(void)setBytes:(NSMutableArray *)arg1 ;
-(void)setHasRole:(BOOL)arg1 ;
-(BOOL)hasRole;
-(id)roleAsString:(int)arg1 ;
-(int)StringAsRole:(id)arg1 ;
-(void)addPackets:(id)arg1 ;
-(void)setPackets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)packets;
-(unsigned long long)packetsCount;
-(void)clearPackets;
-(id)packetsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bytesCount;
-(void)clearBytes;
-(void)addRssi:(id)arg1 ;
-(void)addCca:(id)arg1 ;
-(void)addSnr:(id)arg1 ;
-(void)addTxLatencyBK:(id)arg1 ;
-(void)addTxLatencyBE:(id)arg1 ;
-(void)addTxLatencyVO:(id)arg1 ;
-(void)addTxLatencyVI:(id)arg1 ;
-(void)addAcCompletions:(id)arg1 ;
-(void)setHashID:(NSString *)arg1 ;
-(unsigned long long)rssisCount;
-(void)clearRssis;
-(id)rssiAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ccasCount;
-(void)clearCcas;
-(id)ccaAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)snrsCount;
-(void)clearSnrs;
-(id)snrAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyBKsCount;
-(void)clearTxLatencyBKs;
-(id)txLatencyBKAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyBEsCount;
-(void)clearTxLatencyBEs;
-(id)txLatencyBEAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyVOsCount;
-(void)clearTxLatencyVOs;
-(id)txLatencyVOAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txLatencyVIsCount;
-(void)clearTxLatencyVIs;
-(id)txLatencyVIAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)acCompletionsCount;
-(void)clearAcCompletions;
-(id)acCompletionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHashID;
-(BOOL)hasCompletions;
-(NSString *)hashID;
-(NSMutableArray *)rssis;
-(void)setRssis:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ccas;
-(void)setCcas:(NSMutableArray *)arg1 ;
-(NSMutableArray *)snrs;
-(void)setSnrs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)txLatencyBKs;
-(void)setTxLatencyBKs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)txLatencyBEs;
-(void)setTxLatencyBEs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)txLatencyVOs;
-(void)setTxLatencyVOs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)txLatencyVIs;
-(void)setTxLatencyVIs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)acCompletions;
-(void)setAcCompletions:(NSMutableArray *)arg1 ;
@end

