/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiCLTM : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _sliceStats;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * sliceStats;               //@synthesize sliceStats=_sliceStats - In the implementation block
+(Class)sliceStatsType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)clearSliceStats;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addSliceStats:(id)arg1 ;
-(void)setSliceStats:(NSMutableArray *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)sliceStatsCount;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)sliceStats;
-(id)sliceStatsAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

