/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NRPBDeviceDiff;

@interface NRPBDeviceDiffType : PBCodable <NSCopying> {

	int _changeType;
	NRPBDeviceDiff* _diff;
	SCD_Struct_NR2 _has;

}

@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) int changeType;                     //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasDiff; 
@property (nonatomic,retain) NRPBDeviceDiff * diff;              //@synthesize diff=_diff - In the implementation block
-(id)dictionaryRepresentation;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
-(NRPBDeviceDiff *)diff;
-(BOOL)hasChangeType;
-(void)mergeFrom:(id)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(id)description;
-(int)StringAsChangeType:(id)arg1 ;
-(BOOL)hasDiff;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDiff:(NRPBDeviceDiff *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

