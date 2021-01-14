/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying> {

	NSMutableArray* _responses;
	int _statusCode;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * responses; 
+(BOOL)isValid:(id)arg1 ;
+(Class)responseType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(id)description;
-(unsigned long long)responsesCount;
-(id)responseAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)addResponse:(id)arg1 ;
-(void)clearResponses;
-(void)setResponses:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)responses;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

