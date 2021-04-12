/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMDNSResponderDNSMessageSizeStats : PBCodable <NSCopying> {

	SCD_Struct_AW21* _querySizeCounts;
	SCD_Struct_AW21* _responseSizeCounts;
	unsigned long long _timestamp;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long querySizeCountsCount; 
@property (nonatomic,readonly) unsigned* querySizeCounts; 
@property (nonatomic,readonly) unsigned long long responseSizeCountsCount; 
@property (nonatomic,readonly) unsigned* responseSizeCounts; 
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
-(unsigned long long)querySizeCountsCount;
-(void)clearQuerySizeCounts;
-(unsigned)querySizeCountAtIndex:(unsigned long long)arg1 ;
-(void)addQuerySizeCount:(unsigned)arg1 ;
-(unsigned long long)responseSizeCountsCount;
-(void)clearResponseSizeCounts;
-(unsigned)responseSizeCountAtIndex:(unsigned long long)arg1 ;
-(void)addResponseSizeCount:(unsigned)arg1 ;
-(unsigned*)querySizeCounts;
-(void)setQuerySizeCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)responseSizeCounts;
-(void)setResponseSizeCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

