/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCCKPDate : PBCodable <NSCopying> {

	double _time;
	SCD_Struct_FC4 _has;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) double time;               //@synthesize time=_time - In the implementation block
-(id)dictionaryRepresentation;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTime;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

