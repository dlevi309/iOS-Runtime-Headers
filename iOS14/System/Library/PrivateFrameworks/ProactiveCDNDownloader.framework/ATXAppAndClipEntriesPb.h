/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveCDNDownloader.framework/ProactiveCDNDownloader
*/

#import <ProactiveCDNDownloader/ProactiveCDNDownloader-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ATXAppAndClipEntriesPb : PBCodable <NSCopying> {

	SCD_Struct_AT1* _adamIds;
	SCD_Struct_AT2* _deltaLatitudes;
	SCD_Struct_AT2* _deltaLongitudes;
	SCD_Struct_AT3* _isTouristApps;
	SCD_Struct_AT1* _radius;
	SCD_Struct_AT1* _ranks;
	int _tileLatitudeE7;
	int _tileLongitudeE7;
	NSMutableArray* _urlHashs;

}

@property (assign,nonatomic) int tileLatitudeE7;                                     //@synthesize tileLatitudeE7=_tileLatitudeE7 - In the implementation block
@property (assign,nonatomic) int tileLongitudeE7;                                    //@synthesize tileLongitudeE7=_tileLongitudeE7 - In the implementation block
@property (nonatomic,readonly) unsigned long long deltaLatitudesCount; 
@property (nonatomic,readonly) int* deltaLatitudes; 
@property (nonatomic,readonly) unsigned long long deltaLongitudesCount; 
@property (nonatomic,readonly) int* deltaLongitudes; 
@property (nonatomic,readonly) unsigned long long adamIdsCount; 
@property (nonatomic,readonly) unsigned* adamIds; 
@property (nonatomic,readonly) unsigned long long isTouristAppsCount; 
@property (nonatomic,readonly) BOOL* isTouristApps; 
@property (nonatomic,readonly) unsigned long long ranksCount; 
@property (nonatomic,readonly) unsigned* ranks; 
@property (nonatomic,readonly) unsigned long long radiusCount; 
@property (nonatomic,readonly) unsigned* radius; 
@property (nonatomic,retain) NSMutableArray * urlHashs;                              //@synthesize urlHashs=_urlHashs - In the implementation block
+(Class)urlHashType;
-(id)dictionaryRepresentation;
-(void)setUrlHashs:(NSMutableArray *)arg1 ;
-(unsigned)rankAtIndex:(unsigned long long)arg1 ;
-(int)deltaLongitudeAtIndex:(unsigned long long)arg1 ;
-(int*)deltaLongitudes;
-(id)urlHashAtIndex:(unsigned long long)arg1 ;
-(BOOL)isTouristAppAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)adamIdsCount;
-(void)clearAdamIds;
-(void)addRank:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearRanks;
-(void)setDeltaLatitudes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setTileLongitudeE7:(int)arg1 ;
-(void)clearDeltaLatitudes;
-(unsigned)adamIdAtIndex:(unsigned long long)arg1 ;
-(unsigned*)radius;
-(id)description;
-(unsigned long long)radiusCount;
-(unsigned long long)deltaLatitudesCount;
-(NSMutableArray *)urlHashs;
-(void)setDeltaLongitudes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)addRadius:(unsigned)arg1 ;
-(void)setRadius:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)clearUrlHashs;
-(void)addIsTouristApp:(BOOL)arg1 ;
-(int*)deltaLatitudes;
-(void)addDeltaLatitude:(int)arg1 ;
-(void)setAdamIds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addAdamId:(unsigned)arg1 ;
-(int)deltaLatitudeAtIndex:(unsigned long long)arg1 ;
-(void)setTileLatitudeE7:(int)arg1 ;
-(int)tileLongitudeE7;
-(void)addUrlHash:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)urlHashsCount;
-(unsigned)radiusAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)isTouristAppsCount;
-(unsigned*)adamIds;
-(void)clearDeltaLongitudes;
-(void)setRanks:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)ranksCount;
-(void)copyTo:(id)arg1 ;
-(BOOL*)isTouristApps;
-(void)writeTo:(id)arg1 ;
-(unsigned*)ranks;
-(void)addDeltaLongitude:(int)arg1 ;
-(int)tileLatitudeE7;
-(unsigned long long)deltaLongitudesCount;
-(void)clearRadius;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsTouristApps:(BOOL*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)clearIsTouristApps;
@end

