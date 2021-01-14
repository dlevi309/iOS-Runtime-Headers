/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineLearnedLocationReconciliationVisitDensity : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _countDeviceLost;
	int _totalBranchCount;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBranchCount; 
@property (assign,nonatomic) int totalBranchCount;                      //@synthesize totalBranchCount=_totalBranchCount - In the implementation block
@property (assign,nonatomic) BOOL hasCountDeviceLost; 
@property (assign,nonatomic) int countDeviceLost;                       //@synthesize countDeviceLost=_countDeviceLost - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTotalBranchCount:(int)arg1 ;
-(void)setHasTotalBranchCount:(BOOL)arg1 ;
-(BOOL)hasTotalBranchCount;
-(void)setCountDeviceLost:(int)arg1 ;
-(void)setHasCountDeviceLost:(BOOL)arg1 ;
-(BOOL)hasCountDeviceLost;
-(int)totalBranchCount;
-(int)countDeviceLost;
@end

