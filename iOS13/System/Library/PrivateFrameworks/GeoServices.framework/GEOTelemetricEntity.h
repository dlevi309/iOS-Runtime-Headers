/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasEventKey; 
@property (assign,nonatomic) int eventKey; 
@property (assign,nonatomic) BOOL hasEventValue; 
@property (assign,nonatomic) unsigned long long eventValue; 
@property (nonatomic,readonly) BOOL hasEventDetail; 
@property (nonatomic,retain) NSString * eventDetail; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setEventKey:(int)arg1 ;
-(void)setEventDetail:(NSString *)arg1 ;
-(void)setEventValue:(unsigned long long)arg1 ;
-(NSString *)eventDetail;
-(int)eventKey;
-(void)setHasEventKey:(BOOL)arg1 ;
-(BOOL)hasEventKey;
-(id)eventKeyAsString:(int)arg1 ;
-(int)StringAsEventKey:(id)arg1 ;
-(unsigned long long)eventValue;
-(void)setHasEventValue:(BOOL)arg1 ;
-(BOOL)hasEventValue;
-(BOOL)hasEventDetail;
@end

