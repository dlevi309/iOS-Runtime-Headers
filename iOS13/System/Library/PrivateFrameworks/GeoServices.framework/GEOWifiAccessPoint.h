/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOWifiAccessPoint : PBCodable <NSCopying> {

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)channel;
-(int)rssi;
-(void)setRssi:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)macId;
-(void)setMacId:(NSString *)arg1 ;
-(BOOL)hasMacId;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setChannel:(int)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(unsigned long long)scanTimestamp;
-(void)setScanTimestamp:(unsigned long long)arg1 ;
-(void)setHasScanTimestamp:(BOOL)arg1 ;
-(BOOL)hasScanTimestamp;
-(unsigned)age;
-(void)setAge:(unsigned)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
@end

