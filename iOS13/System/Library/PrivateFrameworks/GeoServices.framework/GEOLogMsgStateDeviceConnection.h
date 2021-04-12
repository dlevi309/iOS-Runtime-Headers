/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_deviceCarrierName : 1;
		unsigned wrote_deviceCountryCode : 1;
		unsigned wrote_cellularDataState : 1;
		unsigned wrote_deviceNetworkConnectivity : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(void)setDeviceNetworkConnectivity:(int)arg1 ;
-(void)setCellularDataState:(int)arg1 ;
-(void)setDeviceCarrierName:(NSString *)arg1 ;
-(void)_readDeviceCarrierName;
-(NSString *)deviceCarrierName;
-(int)deviceNetworkConnectivity;
-(void)setHasDeviceNetworkConnectivity:(BOOL)arg1 ;
-(BOOL)hasDeviceNetworkConnectivity;
-(id)deviceNetworkConnectivityAsString:(int)arg1 ;
-(int)StringAsDeviceNetworkConnectivity:(id)arg1 ;
-(BOOL)hasDeviceCarrierName;
-(int)cellularDataState;
-(void)setHasCellularDataState:(BOOL)arg1 ;
-(BOOL)hasCellularDataState;
-(id)cellularDataStateAsString:(int)arg1 ;
-(int)StringAsCellularDataState:(id)arg1 ;
@end

