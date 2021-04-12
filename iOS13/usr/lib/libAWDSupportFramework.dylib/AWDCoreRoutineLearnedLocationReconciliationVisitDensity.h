/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setTotalBranchCount:(int)arg1 ;
-(void)setHasTotalBranchCount:(BOOL)arg1 ;
-(BOOL)hasTotalBranchCount;
-(void)setCountDeviceLost:(int)arg1 ;
-(void)setHasCountDeviceLost:(BOOL)arg1 ;
-(BOOL)hasCountDeviceLost;
-(int)totalBranchCount;
-(int)countDeviceLost;
@end

