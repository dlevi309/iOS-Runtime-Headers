/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDWiFiMetricsManagerBlacklistedNetworkInfo : PBCodable <NSCopying> {

	NSMutableArray* _blacklistingRecords;
	unsigned _networkFlags;
	unsigned _reserverdInfo;
	NSString* _ssidHash;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasSsidHash; 
@property (nonatomic,retain) NSString * ssidHash;                               //@synthesize ssidHash=_ssidHash - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkFlags; 
@property (assign,nonatomic) unsigned networkFlags;                             //@synthesize networkFlags=_networkFlags - In the implementation block
@property (assign,nonatomic) BOOL hasReserverdInfo; 
@property (assign,nonatomic) unsigned reserverdInfo;                            //@synthesize reserverdInfo=_reserverdInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * blacklistingRecords;              //@synthesize blacklistingRecords=_blacklistingRecords - In the implementation block
+(Class)blacklistingRecordType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setNetworkFlags:(unsigned)arg1 ;
-(void)setHasNetworkFlags:(BOOL)arg1 ;
-(BOOL)hasNetworkFlags;
-(unsigned)networkFlags;
-(void)setSsidHash:(NSString *)arg1 ;
-(void)setBlacklistingRecords:(NSMutableArray *)arg1 ;
-(void)addBlacklistingRecord:(id)arg1 ;
-(unsigned long long)blacklistingRecordsCount;
-(void)clearBlacklistingRecords;
-(id)blacklistingRecordAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSsidHash;
-(void)setReserverdInfo:(unsigned)arg1 ;
-(void)setHasReserverdInfo:(BOOL)arg1 ;
-(BOOL)hasReserverdInfo;
-(NSString *)ssidHash;
-(unsigned)reserverdInfo;
-(NSMutableArray *)blacklistingRecords;
@end

