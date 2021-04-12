/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation;

@interface CLPWifiAPLocation : PBCodable <NSCopying> {

	double _scanTimestamp;
	NSString* _appBundleId;
	int _channel;
	int _hidden;
	CLPLocation* _location;
	NSString* _mac;
	int _rssi;
	int _scanType;
	int _serverHash;
	SCD_Struct_CL2 _has;

}

@property (nonatomic,retain) NSString * mac;                      //@synthesize mac=_mac - In the implementation block
@property (assign,nonatomic) int channel;                         //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) int hidden;                          //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) int rssi;                            //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasScanTimestamp; 
@property (assign,nonatomic) double scanTimestamp;                //@synthesize scanTimestamp=_scanTimestamp - In the implementation block
@property (nonatomic,retain) CLPLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                      //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasScanType; 
@property (assign,nonatomic) int scanType;                        //@synthesize scanType=_scanType - In the implementation block
-(id)dictionaryRepresentation;
-(double)scanTimestamp;
-(BOOL)hasServerHash;
-(BOOL)hasHidden;
-(int)hidden;
-(void)setServerHash:(int)arg1 ;
-(BOOL)hasAppBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setRssi:(int)arg1 ;
-(int)serverHash;
-(void)setMac:(NSString *)arg1 ;
-(NSString *)mac;
-(NSString *)appBundleId;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasScanTimestamp;
-(void)setHasHidden:(BOOL)arg1 ;
-(void)setHasScanTimestamp:(BOOL)arg1 ;
-(void)setHidden:(int)arg1 ;
-(CLPLocation *)location;
-(void)setScanTimestamp:(double)arg1 ;
-(int)rssi;
-(void)setChannel:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)channel;
-(void)setLocation:(CLPLocation *)arg1 ;
-(id)description;
-(int)scanType;
-(void)setHasScanType:(BOOL)arg1 ;
-(int)StringAsScanType:(id)arg1 ;
-(unsigned long long)hash;
-(id)scanTypeAsString:(int)arg1 ;
-(void)setScanType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasScanType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

