/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSURL;

@interface GEOURLInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _url;
	unsigned _alternativeMultipathTCPPort;
	BOOL _supportsMultipathTCP;
	BOOL _useAuthProxy;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) NSURL * nsURL; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) BOOL hasUseAuthProxy; 
@property (assign,nonatomic) BOOL useAuthProxy; 
@property (assign,nonatomic) BOOL hasSupportsMultipathTCP; 
@property (assign,nonatomic) BOOL supportsMultipathTCP; 
@property (assign,nonatomic) BOOL hasAlternativeMultipathTCPPort; 
@property (assign,nonatomic) unsigned alternativeMultipathTCPPort; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setAlternativeMultipathTCPPort:(unsigned)arg1 ;
-(id)jsonRepresentation;
-(BOOL)useAuthProxy;
-(void)setHasAlternativeMultipathTCPPort:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasSupportsMultipathTCP;
-(BOOL)hasAlternativeMultipathTCPPort;
-(void)setUseAuthProxy:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasUrl;
-(BOOL)supportsMultipathTCP;
-(void)setSupportsMultipathTCP:(BOOL)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)hash;
-(unsigned)alternativeMultipathTCPPort;
-(BOOL)hasUseAuthProxy;
-(NSURL *)nsURL;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUseAuthProxy:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasSupportsMultipathTCP:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

