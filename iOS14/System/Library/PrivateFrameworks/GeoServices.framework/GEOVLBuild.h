/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLBuild : PBCodable <NSCopying> {

	unsigned long long _identifier;
	unsigned _dataFormatVersion;
	unsigned _dataOutputVersion;
	unsigned _routingKey;
	struct {
		unsigned has_identifier : 1;
		unsigned has_dataFormatVersion : 1;
		unsigned has_dataOutputVersion : 1;
		unsigned has_routingKey : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (assign,nonatomic) BOOL hasDataOutputVersion; 
@property (assign,nonatomic) unsigned dataOutputVersion; 
@property (assign,nonatomic) BOOL hasDataFormatVersion; 
@property (assign,nonatomic) unsigned dataFormatVersion; 
@property (assign,nonatomic) BOOL hasRoutingKey; 
@property (assign,nonatomic) unsigned routingKey; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)routingKey;
-(void)setRoutingKey:(unsigned)arg1 ;
-(void)setHasRoutingKey:(BOOL)arg1 ;
-(BOOL)hasRoutingKey;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasIdentifier;
-(unsigned)dataFormatVersion;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)dataOutputVersion;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)description;
-(void)setHasDataFormatVersion:(BOOL)arg1 ;
-(BOOL)hasDataFormatVersion;
-(unsigned long long)hash;
-(void)setDataOutputVersion:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasDataOutputVersion:(BOOL)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDataOutputVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDataFormatVersion:(unsigned)arg1 ;
@end

