/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSBeginPairingMessage : PBCodable <NSCopying> {

	NSString* _appName;
	NSString* _deviceModel;
	NSString* _deviceName;
	NSString* _passcode;

}

@property (nonatomic,readonly) BOOL hasAppName; 
@property (nonatomic,retain) NSString * appName;                  //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) BOOL hasPasscode; 
@property (nonatomic,retain) NSString * passcode;                 //@synthesize passcode=_passcode - In the implementation block
-(id)dictionaryRepresentation;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceModel;
-(BOOL)hasDeviceModel;
-(BOOL)hasDeviceName;
-(void)setAppName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
-(id)description;
-(NSString *)passcode;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPasscode;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)appName;
-(BOOL)hasAppName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

