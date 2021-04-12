/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXPBAVRouteInfo : PBCodable <NSCopying> {

	NSString* _deviceID;
	NSString* _deviceName;
	BOOL _isExternalRoute;
	SCD_Struct_AT1 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL hasIsExternalRoute; 
@property (assign,nonatomic) BOOL isExternalRoute;                 //@synthesize isExternalRoute=_isExternalRoute - In the implementation block
-(void)setDeviceID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(BOOL)hasDeviceName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDeviceID;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isExternalRoute;
-(void)setIsExternalRoute:(BOOL)arg1 ;
-(void)setHasIsExternalRoute:(BOOL)arg1 ;
-(BOOL)hasIsExternalRoute;
@end

