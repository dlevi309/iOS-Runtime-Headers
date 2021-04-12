/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setColorData:(NSData *)arg1 ;
-(NSData *)colorData;
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

