/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPDoodle : PBCodable <NSCopying> {

	NSData* _colorData;
	unsigned _doodleCount;
	NSData* _doodleData;
	NSData* _pointTimeDeltaData;
	SCD_Struct_ET18 _has;

}

@property (assign,nonatomic) BOOL hasDoodleCount; 
@property (assign,nonatomic) unsigned doodleCount;                      //@synthesize doodleCount=_doodleCount - In the implementation block
@property (nonatomic,readonly) BOOL hasDoodleData; 
@property (nonatomic,retain) NSData * doodleData;                       //@synthesize doodleData=_doodleData - In the implementation block
@property (nonatomic,readonly) BOOL hasColorData; 
@property (nonatomic,retain) NSData * colorData;                        //@synthesize colorData=_colorData - In the implementation block
@property (nonatomic,readonly) BOOL hasPointTimeDeltaData; 
@property (nonatomic,retain) NSData * pointTimeDeltaData;               //@synthesize pointTimeDeltaData=_pointTimeDeltaData - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)colorData;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setColorData:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)doodleCount;
-(NSData *)doodleData;
-(NSData *)pointTimeDeltaData;
-(void)setDoodleCount:(unsigned)arg1 ;
-(void)setDoodleData:(NSData *)arg1 ;
-(void)setPointTimeDeltaData:(NSData *)arg1 ;
-(void)setHasDoodleCount:(BOOL)arg1 ;
-(BOOL)hasDoodleCount;
-(BOOL)hasDoodleData;
-(BOOL)hasColorData;
-(BOOL)hasPointTimeDeltaData;
@end

