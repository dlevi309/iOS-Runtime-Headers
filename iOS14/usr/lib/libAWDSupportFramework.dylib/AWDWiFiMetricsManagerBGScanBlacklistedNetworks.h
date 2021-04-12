/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDWiFiMetricsManagerBGScanBlacklistedNetworks : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _blacklistingHistorys;
	NSString* _interfaceName;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasInterfaceName; 
@property (nonatomic,retain) NSString * interfaceName;                           //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) NSMutableArray * blacklistingHistorys;              //@synthesize blacklistingHistorys=_blacklistingHistorys - In the implementation block
+(Class)blacklistingHistoryType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)interfaceName;
-(id)description;
-(BOOL)hasInterfaceName;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setBlacklistingHistorys:(NSMutableArray *)arg1 ;
-(void)addBlacklistingHistory:(id)arg1 ;
-(unsigned long long)blacklistingHistorysCount;
-(void)clearBlacklistingHistorys;
-(id)blacklistingHistoryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)blacklistingHistorys;
@end

