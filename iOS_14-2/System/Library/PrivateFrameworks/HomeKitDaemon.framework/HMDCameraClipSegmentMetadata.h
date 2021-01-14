/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDCameraClipSegmentMetadata : PBCodable <NSCopying> {

	unsigned long long _byteLength;
	unsigned long long _byteOffset;
	double _duration;
	double _timeOffset;
	unsigned _height;
	int _type;
	unsigned _width;
	SCD_Struct_HM31 _has;

}

@property (assign,nonatomic) BOOL hasByteOffset; 
@property (assign,nonatomic) unsigned long long byteOffset;              //@synthesize byteOffset=_byteOffset - In the implementation block
@property (assign,nonatomic) BOOL hasByteLength; 
@property (assign,nonatomic) unsigned long long byteLength;              //@synthesize byteLength=_byteLength - In the implementation block
@property (assign,nonatomic) BOOL hasTimeOffset; 
@property (assign,nonatomic) double timeOffset;                          //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height;                            //@synthesize height=_height - In the implementation block
-(void)setHeight:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(unsigned)width;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(double)timeOffset;
-(BOOL)hasWidth;
-(void)setByteLength:(unsigned long long)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)height;
-(void)setType:(int)arg1 ;
-(id)description;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(int)type;
-(unsigned long long)byteOffset;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)byteLength;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setByteOffset:(unsigned long long)arg1 ;
-(void)setHasByteOffset:(BOOL)arg1 ;
-(BOOL)hasByteOffset;
-(void)setHasByteLength:(BOOL)arg1 ;
-(BOOL)hasByteLength;
-(void)setHasTimeOffset:(BOOL)arg1 ;
-(BOOL)hasTimeOffset;
@end

