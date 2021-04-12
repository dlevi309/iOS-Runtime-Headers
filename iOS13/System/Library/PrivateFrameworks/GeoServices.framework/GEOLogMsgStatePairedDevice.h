/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasIsConnected; 
@property (assign,nonatomic) BOOL isConnected; 
@property (nonatomic,readonly) BOOL hasPairedDeviceIdentifier; 
@property (nonatomic,retain) GEOLogMsgStateDeviceIdentifier * pairedDeviceIdentifier; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)isConnected;
-(void)readAll:(BOOL)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(void)setPairedDeviceIdentifier:(GEOLogMsgStateDeviceIdentifier *)arg1 ;
-(GEOLogMsgStateDeviceIdentifier *)pairedDeviceIdentifier;
-(void)setHasIsConnected:(BOOL)arg1 ;
-(BOOL)hasIsConnected;
-(BOOL)hasPairedDeviceIdentifier;
@end

