/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOWiFiAP : PBCodable <NSCopying> {

	NSString* _uniqueID;
	unsigned _channel;
	int _origin;
	int _rssi;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID; 
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi; 
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel; 
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin; 
+(BOOL)isValid:(id)arg1 ;
-(void)setOrigin:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUniqueID:(NSString *)arg1 ;
-(int)origin;
-(NSString *)uniqueID;
-(void)readAll:(BOOL)arg1 ;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(int)rssi;
-(void)setChannel:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)channel;
-(id)description;
-(BOOL)hasChannel;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasUniqueID;
-(BOOL)hasOrigin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

