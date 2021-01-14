/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLPRValidationRange : PBCodable <NSCopying> {

	NSString* _validCharacters;
	int _end;
	int _start;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) int start; 
@property (assign,nonatomic) BOOL hasEnd; 
@property (assign,nonatomic) int end; 
@property (nonatomic,readonly) BOOL hasValidCharacters; 
@property (nonatomic,retain) NSString * validCharacters; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)end;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasEnd;
-(id)jsonRepresentation;
-(int)start;
-(BOOL)hasStart;
-(void)setHasEnd:(BOOL)arg1 ;
-(void)setHasStart:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setEnd:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)validCharacters;
-(void)setValidCharacters:(NSString *)arg1 ;
-(BOOL)hasValidCharacters;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStart:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

