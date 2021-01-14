/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorFlickerDetection : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _flicker50;
	unsigned _flicker60;
	unsigned _flickerDC;
	unsigned _flickerInvalid;
	unsigned _flickerOver500;
	unsigned _flickerUnder100;
	unsigned _flickerUnder300;
	unsigned _flickerUnder500;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFlickerDC; 
@property (assign,nonatomic) unsigned flickerDC;                        //@synthesize flickerDC=_flickerDC - In the implementation block
@property (assign,nonatomic) BOOL hasFlicker50; 
@property (assign,nonatomic) unsigned flicker50;                        //@synthesize flicker50=_flicker50 - In the implementation block
@property (assign,nonatomic) BOOL hasFlicker60; 
@property (assign,nonatomic) unsigned flicker60;                        //@synthesize flicker60=_flicker60 - In the implementation block
@property (assign,nonatomic) BOOL hasFlickerUnder100; 
@property (assign,nonatomic) unsigned flickerUnder100;                  //@synthesize flickerUnder100=_flickerUnder100 - In the implementation block
@property (assign,nonatomic) BOOL hasFlickerUnder300; 
@property (assign,nonatomic) unsigned flickerUnder300;                  //@synthesize flickerUnder300=_flickerUnder300 - In the implementation block
@property (assign,nonatomic) BOOL hasFlickerUnder500; 
@property (assign,nonatomic) unsigned flickerUnder500;                  //@synthesize flickerUnder500=_flickerUnder500 - In the implementation block
@property (assign,nonatomic) BOOL hasFlickerOver500; 
@property (assign,nonatomic) unsigned flickerOver500;                   //@synthesize flickerOver500=_flickerOver500 - In the implementation block
@property (assign,nonatomic) BOOL hasFlickerInvalid; 
@property (assign,nonatomic) unsigned flickerInvalid;                   //@synthesize flickerInvalid=_flickerInvalid - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFlickerDC:(unsigned)arg1 ;
-(void)setHasFlickerDC:(BOOL)arg1 ;
-(BOOL)hasFlickerDC;
-(void)setFlicker50:(unsigned)arg1 ;
-(void)setHasFlicker50:(BOOL)arg1 ;
-(BOOL)hasFlicker50;
-(void)setFlicker60:(unsigned)arg1 ;
-(void)setHasFlicker60:(BOOL)arg1 ;
-(BOOL)hasFlicker60;
-(void)setFlickerUnder100:(unsigned)arg1 ;
-(void)setHasFlickerUnder100:(BOOL)arg1 ;
-(BOOL)hasFlickerUnder100;
-(void)setFlickerUnder300:(unsigned)arg1 ;
-(void)setHasFlickerUnder300:(BOOL)arg1 ;
-(BOOL)hasFlickerUnder300;
-(void)setFlickerUnder500:(unsigned)arg1 ;
-(void)setHasFlickerUnder500:(BOOL)arg1 ;
-(BOOL)hasFlickerUnder500;
-(void)setFlickerOver500:(unsigned)arg1 ;
-(void)setHasFlickerOver500:(BOOL)arg1 ;
-(BOOL)hasFlickerOver500;
-(void)setFlickerInvalid:(unsigned)arg1 ;
-(void)setHasFlickerInvalid:(BOOL)arg1 ;
-(BOOL)hasFlickerInvalid;
-(unsigned)flickerDC;
-(unsigned)flicker50;
-(unsigned)flicker60;
-(unsigned)flickerUnder100;
-(unsigned)flickerUnder300;
-(unsigned)flickerUnder500;
-(unsigned)flickerOver500;
-(unsigned)flickerInvalid;
@end

