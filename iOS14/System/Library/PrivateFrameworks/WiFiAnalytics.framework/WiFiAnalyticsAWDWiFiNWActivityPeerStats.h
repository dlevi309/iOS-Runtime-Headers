/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityTxCompletions, NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityPeerStats : PBCodable <NSCopying> {

	NSMutableArray* _acCompletions;
	NSMutableArray* _bytes;
	NSMutableArray* _ccas;
	WiFiAnalyticsAWDWiFiNWActivityTxCompletions* _completions;
	NSString* _hashID;
	NSMutableArray* _packets;
	int _role;
	NSMutableArray* _rssis;
	NSMutableArray* _snrs;
	NSMutableArray* _txLatencyBEs;
	NSMutableArray* _txLatencyBKs;
	NSMutableArray* _txLatencyVIs;
	NSMutableArray* _txLatencyVOs;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role;                                                               //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) BOOL hasHashID; 
@property (nonatomic,retain) NSString * hashID;                                                      //@synthesize hashID=_hashID - In the implementation block
@property (nonatomic,retain) NSMutableArray * rssis;                                                 //@synthesize rssis=_rssis - In the implementation block
@property (nonatomic,retain) NSMutableArray * ccas;                                                  //@synthesize ccas=_ccas - In the implementation block
@property (nonatomic,retain) NSMutableArray * snrs;                                                  //@synthesize snrs=_snrs - In the implementation block
@property (nonatomic,retain) NSMutableArray * packets;                                               //@synthesize packets=_packets - In the implementation block
@property (nonatomic,retain) NSMutableArray * bytes;                                                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyBKs;                                          //@synthesize txLatencyBKs=_txLatencyBKs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyBEs;                                          //@synthesize txLatencyBEs=_txLatencyBEs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyVOs;                                          //@synthesize txLatencyVOs=_txLatencyVOs - In the implementation block
@property (nonatomic,retain) NSMutableArray * txLatencyVIs;                                          //@synthesize txLatencyVIs=_txLatencyVIs - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletions; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityTxCompletions * completions;              //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSMutableArray * acCompletions;                                         //@synthesize acCompletions=_acCompletions - In the implementation block
+(Class)snrType;
+(Class)ccaType;
+(Class)packetsType;
+(Class)bytesType;
+(Class)rssiType;
+(Class)txLatencyBKType;
+(Class)txLatencyBEType;
+(Class)txLatencyVOType;
+(Class)txLatencyVIType;
+(Class)acCompletionsType;
-(BOOL)hasRole;
-(void)setHasRole:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(id)bytesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)ccas;
-(NSMutableArray *)snrs;
-(void)setPackets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bytes;
-(NSMutableArray *)rssis;
-(void)setRole:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)packets;
-(NSString *)hashID;
-(id)roleAsString:(int)arg1 ;
-(int)StringAsRole:(id)arg1 ;
-(id)description;
-(void)setBytes:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addCca:(id)arg1 ;
-(void)addSnr:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)role;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WiFiAnalyticsAWDWiFiNWActivityTxCompletions *)completions;
-(void)setCompletions:(WiFiAnalyticsAWDWiFiNWActivityTxCompletions *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPackets:(id)arg1 ;
-(void)addBytes:(id)arg1 ;
-(unsigned long long)packetsCount;
-(void)clearPackets;
-(id)packetsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bytesCount;
-(void)clearBytes;
-(void)addRssi:(id)arg1 ;
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
-(void)setRssis:(NSMutableArray *)arg1 ;
-(void)setCcas:(NSMutableArray *)arg1 ;
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
