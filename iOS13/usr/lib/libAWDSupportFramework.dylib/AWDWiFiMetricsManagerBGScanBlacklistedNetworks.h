/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasInterfaceName;
-(void)setBlacklistingHistorys:(NSMutableArray *)arg1 ;
-(void)addBlacklistingHistory:(id)arg1 ;
-(unsigned long long)blacklistingHistorysCount;
-(void)clearBlacklistingHistorys;
-(id)blacklistingHistoryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)blacklistingHistorys;
@end

