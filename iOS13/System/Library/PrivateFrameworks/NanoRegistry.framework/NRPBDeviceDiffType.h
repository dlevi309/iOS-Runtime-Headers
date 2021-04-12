/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)changeType;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(NRPBDeviceDiff *)diff;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(void)setDiff:(NRPBDeviceDiff *)arg1 ;
-(BOOL)hasDiff;
@end

