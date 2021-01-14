/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDWifiAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _macId;
	unsigned long long _scanTimestamp;
	unsigned _age;
	int _channel;
	int _rssi;
	struct {
		unsigned has_scanTimestamp : 1;
		unsigned has_age : 1;
		unsigned has_channel : 1;
		unsigned has_rssi : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMacId; 
@property (nonatomic,retain) NSString * macId; 
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi; 
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel; 
@property (assign,nonatomic) BOOL hasScanTimestamp; 
@property (assign,nonatomic) unsigned long long scanTimestamp; 
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) unsigned age; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)macId;
-(unsigned long long)scanTimestamp;
-(void)readAll:(BOOL)arg1 ;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasScanTimestamp;
-(BOOL)hasRssi;
-(void)setHasScanTimestamp:(BOOL)arg1 ;
-(void)setScanTimestamp:(unsigned long long)arg1 ;
-(int)rssi;
-(void)setChannel:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)channel;
-(id)description;
-(BOOL)hasMacId;
-(void)setAge:(unsigned)arg1 ;
-(BOOL)hasChannel;
-(unsigned long long)hash;
-(void)setMacId:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAge;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(id)initWithGEOWifiAccessPoint:(id)arg1 ;
-(unsigned)age;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

