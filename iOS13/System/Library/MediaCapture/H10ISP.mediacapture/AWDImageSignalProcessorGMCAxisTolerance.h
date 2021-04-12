/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorGMCAxisTolerance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _source;
	int _thresholdPassed;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasThresholdPassed; 
@property (assign,nonatomic) int thresholdPassed;                       //@synthesize thresholdPassed=_thresholdPassed - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                //@synthesize source=_source - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(void)setThresholdPassed:(int)arg1 ;
-(void)setHasThresholdPassed:(BOOL)arg1 ;
-(BOOL)hasThresholdPassed;
-(int)thresholdPassed;
@end

