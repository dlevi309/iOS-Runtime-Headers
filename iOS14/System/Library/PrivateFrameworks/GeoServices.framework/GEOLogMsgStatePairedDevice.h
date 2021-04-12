/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying> {

	GEOLogMsgStateDeviceIdentifier* _pairedDeviceIdentifier;
	int _type;
	BOOL _isConnected;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasIsConnected; 
@property (assign,nonatomic) BOOL isConnected; 
@property (nonatomic,readonly) BOOL hasPairedDeviceIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateDeviceIdentifier * pairedDeviceIdentifier; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isConnected;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasIsConnected:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPairedDeviceIdentifier;
-(void)setType:(int)arg1 ;
-(BOOL)hasIsConnected;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setIsConnected:(BOOL)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(void)setPairedDeviceIdentifier:(GEOLogMsgStateDeviceIdentifier *)arg1 ;
-(GEOLogMsgStateDeviceIdentifier *)pairedDeviceIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

