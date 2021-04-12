/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _deviceCarrierName;
	NSString* _deviceCountryCode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cellularDataState;
	int _deviceNetworkConnectivity;
	struct {
		unsigned has_cellularDataState : 1;
		unsigned has_deviceNetworkConnectivity : 1;
		unsigned read_deviceCarrierName : 1;
		unsigned read_deviceCountryCode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDeviceNetworkConnectivity; 
@property (assign,nonatomic) int deviceNetworkConnectivity; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDeviceCarrierName; 
@property (nonatomic,retain) NSString * deviceCarrierName; 
@property (assign,nonatomic) BOOL hasCellularDataState; 
@property (assign,nonatomic) int cellularDataState; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasDeviceNetworkConnectivity:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setDeviceNetworkConnectivity:(int)arg1 ;
-(void)setCellularDataState:(int)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCellularDataState;
-(NSString *)deviceCountryCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDeviceCarrierName:(NSString *)arg1 ;
-(id)description;
-(int)deviceNetworkConnectivity;
-(int)cellularDataState;
-(id)deviceNetworkConnectivityAsString:(int)arg1 ;
-(int)StringAsCellularDataState:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDeviceNetworkConnectivity;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)deviceCarrierName;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)cellularDataStateAsString:(int)arg1 ;
-(void)setHasCellularDataState:(BOOL)arg1 ;
-(int)StringAsDeviceNetworkConnectivity:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasDeviceCarrierName;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

