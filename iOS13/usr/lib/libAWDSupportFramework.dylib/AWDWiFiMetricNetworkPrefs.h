/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiMetricNetworkPrefs : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _adhocNetsCount;
	unsigned _applePersHotspotNetsCount;
	unsigned _atjCanceledCount;
	unsigned _atjUsedCount;
	unsigned _captiveNetsCount;
	unsigned _eapNetsCount;
	unsigned _hiddenNetsCount;
	unsigned _mostUsedCount;
	NSMutableArray* _mostUsedNetworks;
	unsigned _openNonCaptiveNetsCount;
	unsigned _prefNetsCount;
	unsigned _wapiNetsCount;
	unsigned _wepNetsCount;
	unsigned _wpaNetsCount;
	BOOL _atjEnabled;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasAtjEnabled; 
@property (assign,nonatomic) BOOL atjEnabled;                                 //@synthesize atjEnabled=_atjEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAtjCanceledCount; 
@property (assign,nonatomic) unsigned atjCanceledCount;                       //@synthesize atjCanceledCount=_atjCanceledCount - In the implementation block
@property (assign,nonatomic) BOOL hasAtjUsedCount; 
@property (assign,nonatomic) unsigned atjUsedCount;                           //@synthesize atjUsedCount=_atjUsedCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdhocNetsCount; 
@property (assign,nonatomic) unsigned adhocNetsCount;                         //@synthesize adhocNetsCount=_adhocNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasPrefNetsCount; 
@property (assign,nonatomic) unsigned prefNetsCount;                          //@synthesize prefNetsCount=_prefNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasCaptiveNetsCount; 
@property (assign,nonatomic) unsigned captiveNetsCount;                       //@synthesize captiveNetsCount=_captiveNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasApplePersHotspotNetsCount; 
@property (assign,nonatomic) unsigned applePersHotspotNetsCount;              //@synthesize applePersHotspotNetsCount=_applePersHotspotNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasWapiNetsCount; 
@property (assign,nonatomic) unsigned wapiNetsCount;                          //@synthesize wapiNetsCount=_wapiNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasMostUsedCount; 
@property (assign,nonatomic) unsigned mostUsedCount;                          //@synthesize mostUsedCount=_mostUsedCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * mostUsedNetworks;               //@synthesize mostUsedNetworks=_mostUsedNetworks - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasHiddenNetsCount; 
@property (assign,nonatomic) unsigned hiddenNetsCount;                        //@synthesize hiddenNetsCount=_hiddenNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasWepNetsCount; 
@property (assign,nonatomic) unsigned wepNetsCount;                           //@synthesize wepNetsCount=_wepNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasWpaNetsCount; 
@property (assign,nonatomic) unsigned wpaNetsCount;                           //@synthesize wpaNetsCount=_wpaNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasEapNetsCount; 
@property (assign,nonatomic) unsigned eapNetsCount;                           //@synthesize eapNetsCount=_eapNetsCount - In the implementation block
@property (assign,nonatomic) BOOL hasOpenNonCaptiveNetsCount; 
@property (assign,nonatomic) unsigned openNonCaptiveNetsCount;                //@synthesize openNonCaptiveNetsCount=_openNonCaptiveNetsCount - In the implementation block
+(Class)mostUsedNetworksType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setMostUsedNetworks:(NSMutableArray *)arg1 ;
-(void)addMostUsedNetworks:(id)arg1 ;
-(unsigned long long)mostUsedNetworksCount;
-(void)clearMostUsedNetworks;
-(id)mostUsedNetworksAtIndex:(unsigned long long)arg1 ;
-(void)setAtjEnabled:(BOOL)arg1 ;
-(void)setHasAtjEnabled:(BOOL)arg1 ;
-(BOOL)hasAtjEnabled;
-(void)setAtjCanceledCount:(unsigned)arg1 ;
-(void)setHasAtjCanceledCount:(BOOL)arg1 ;
-(BOOL)hasAtjCanceledCount;
-(void)setAtjUsedCount:(unsigned)arg1 ;
-(void)setHasAtjUsedCount:(BOOL)arg1 ;
-(BOOL)hasAtjUsedCount;
-(void)setAdhocNetsCount:(unsigned)arg1 ;
-(void)setHasAdhocNetsCount:(BOOL)arg1 ;
-(BOOL)hasAdhocNetsCount;
-(void)setPrefNetsCount:(unsigned)arg1 ;
-(void)setHasPrefNetsCount:(BOOL)arg1 ;
-(BOOL)hasPrefNetsCount;
-(void)setCaptiveNetsCount:(unsigned)arg1 ;
-(void)setHasCaptiveNetsCount:(BOOL)arg1 ;
-(BOOL)hasCaptiveNetsCount;
-(void)setApplePersHotspotNetsCount:(unsigned)arg1 ;
-(void)setHasApplePersHotspotNetsCount:(BOOL)arg1 ;
-(BOOL)hasApplePersHotspotNetsCount;
-(void)setWapiNetsCount:(unsigned)arg1 ;
-(void)setHasWapiNetsCount:(BOOL)arg1 ;
-(BOOL)hasWapiNetsCount;
-(void)setMostUsedCount:(unsigned)arg1 ;
-(void)setHasMostUsedCount:(BOOL)arg1 ;
-(BOOL)hasMostUsedCount;
-(void)setHiddenNetsCount:(unsigned)arg1 ;
-(void)setHasHiddenNetsCount:(BOOL)arg1 ;
-(BOOL)hasHiddenNetsCount;
-(void)setWepNetsCount:(unsigned)arg1 ;
-(void)setHasWepNetsCount:(BOOL)arg1 ;
-(BOOL)hasWepNetsCount;
-(void)setWpaNetsCount:(unsigned)arg1 ;
-(void)setHasWpaNetsCount:(BOOL)arg1 ;
-(BOOL)hasWpaNetsCount;
-(void)setEapNetsCount:(unsigned)arg1 ;
-(void)setHasEapNetsCount:(BOOL)arg1 ;
-(BOOL)hasEapNetsCount;
-(void)setOpenNonCaptiveNetsCount:(unsigned)arg1 ;
-(void)setHasOpenNonCaptiveNetsCount:(BOOL)arg1 ;
-(BOOL)hasOpenNonCaptiveNetsCount;
-(BOOL)atjEnabled;
-(unsigned)atjCanceledCount;
-(unsigned)atjUsedCount;
-(unsigned)adhocNetsCount;
-(unsigned)prefNetsCount;
-(unsigned)captiveNetsCount;
-(unsigned)applePersHotspotNetsCount;
-(unsigned)wapiNetsCount;
-(unsigned)mostUsedCount;
-(NSMutableArray *)mostUsedNetworks;
-(unsigned)hiddenNetsCount;
-(unsigned)wepNetsCount;
-(unsigned)wpaNetsCount;
-(unsigned)eapNetsCount;
-(unsigned)openNonCaptiveNetsCount;
@end

