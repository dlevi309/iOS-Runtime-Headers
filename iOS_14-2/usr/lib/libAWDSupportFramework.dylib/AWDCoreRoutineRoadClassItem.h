/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineRoadClassItem : PBCodable <NSCopying> {

	int _percentage;
	int _roadClass;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasRoadClass; 
@property (assign,nonatomic) int roadClass;                   //@synthesize roadClass=_roadClass - In the implementation block
@property (assign,nonatomic) BOOL hasPercentage; 
@property (assign,nonatomic) int percentage;                  //@synthesize percentage=_percentage - In the implementation block
-(id)dictionaryRepresentation;
-(void)setRoadClass:(int)arg1 ;
-(BOOL)hasRoadClass;
-(void)setHasRoadClass:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)roadClass;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)percentage;
-(void)setPercentage:(int)arg1 ;
-(void)setHasPercentage:(BOOL)arg1 ;
-(BOOL)hasPercentage;
@end

