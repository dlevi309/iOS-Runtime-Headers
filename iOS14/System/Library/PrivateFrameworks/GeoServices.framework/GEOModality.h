/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOModality : PBCodable <NSCopying> {

	double _timestamp;
	int _confidence;
	BOOL _expectedModality;
	BOOL _notMoving;
	struct {
		unsigned has_timestamp : 1;
		unsigned has_confidence : 1;
		unsigned has_expectedModality : 1;
		unsigned has_notMoving : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) BOOL hasExpectedModality; 
@property (assign,nonatomic) BOOL expectedModality; 
@property (assign,nonatomic) BOOL hasNotMoving; 
@property (assign,nonatomic) BOOL notMoving; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence; 
+(BOOL)isValid:(id)arg1 ;
-(int)confidence;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setConfidence:(int)arg1 ;
-(BOOL)notMoving;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasNotMoving;
-(void)setExpectedModality:(BOOL)arg1 ;
-(void)setNotMoving:(BOOL)arg1 ;
-(BOOL)expectedModality;
-(void)setHasExpectedModality:(BOOL)arg1 ;
-(BOOL)hasExpectedModality;
-(void)setHasNotMoving:(BOOL)arg1 ;
-(id)confidenceAsString:(int)arg1 ;
-(int)StringAsConfidence:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

