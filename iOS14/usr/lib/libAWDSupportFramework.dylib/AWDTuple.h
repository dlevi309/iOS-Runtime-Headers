/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDTuple : PBCodable <NSCopying> {

	unsigned long long _downDuration;
	unsigned long long _upDuration;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasUpDuration; 
@property (assign,nonatomic) unsigned long long upDuration;                //@synthesize upDuration=_upDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDownDuration; 
@property (assign,nonatomic) unsigned long long downDuration;              //@synthesize downDuration=_downDuration - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDownDuration:(unsigned long long)arg1 ;
-(void)setUpDuration:(unsigned long long)arg1 ;
-(void)setHasUpDuration:(BOOL)arg1 ;
-(BOOL)hasUpDuration;
-(void)setHasDownDuration:(BOOL)arg1 ;
-(BOOL)hasDownDuration;
-(unsigned long long)upDuration;
-(unsigned long long)downDuration;
@end

