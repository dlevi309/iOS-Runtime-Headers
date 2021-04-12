/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueID;
-(void)writeTo:(id)arg1 ;
-(int)origin;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)channel;
-(int)rssi;
-(void)setOrigin:(int)arg1 ;
-(void)setRssi:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(BOOL)hasOrigin;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)hasUniqueID;
@end

