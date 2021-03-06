/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying> {

	NSString* _eventDetail;
	unsigned long long _eventValue;
	int _eventKey;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasEventKey; 
@property (assign,nonatomic) int eventKey; 
@property (assign,nonatomic) BOOL hasEventValue; 
@property (assign,nonatomic) unsigned long long eventValue; 
@property (nonatomic,readonly) BOOL hasEventDetail; 
@property (nonatomic,retain) NSString * eventDetail; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setEventDetail:(NSString *)arg1 ;
-(void)setEventValue:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)eventValue;
-(NSString *)eventDetail;
-(BOOL)hasEventKey;
-(void)setHasEventKey:(BOOL)arg1 ;
-(id)eventKeyAsString:(int)arg1 ;
-(int)StringAsEventKey:(id)arg1 ;
-(void)setHasEventValue:(BOOL)arg1 ;
-(BOOL)hasEventValue;
-(BOOL)hasEventDetail;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)eventKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEventKey:(int)arg1 ;
@end

