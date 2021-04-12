/*
* Generated on Monday, March 1, 2021 at 2:32:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBDeviceInfo : PBCodable <NSCopying> {

	long long _deviceDstOffset;
	long long _deviceUtcOffset;
	NSString* _deviceAppBundleId;
	NSString* _deviceAppVersion;
	NSString* _deviceOsVersion;
	NSMutableArray* _devicePreferredLanguages;
	NSString* _devicePushToken;
	NSString* _deviceTimezone;
	int _deviceTokenEnv;
	NSString* _deviceType;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSString * devicePushToken;                             //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceType; 
@property (nonatomic,retain) NSString * deviceType;                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceTimezone; 
@property (nonatomic,retain) NSString * deviceTimezone;                              //@synthesize deviceTimezone=_deviceTimezone - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceTokenEnv; 
@property (assign,nonatomic) int deviceTokenEnv;                                     //@synthesize deviceTokenEnv=_deviceTokenEnv - In the implementation block
@property (nonatomic,retain) NSMutableArray * devicePreferredLanguages;              //@synthesize devicePreferredLanguages=_devicePreferredLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceOsVersion; 
@property (nonatomic,retain) NSString * deviceOsVersion;                             //@synthesize deviceOsVersion=_deviceOsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceUtcOffset; 
@property (assign,nonatomic) long long deviceUtcOffset;                              //@synthesize deviceUtcOffset=_deviceUtcOffset - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceDstOffset; 
@property (assign,nonatomic) long long deviceDstOffset;                              //@synthesize deviceDstOffset=_deviceDstOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceAppVersion; 
@property (nonatomic,retain) NSString * deviceAppVersion;                            //@synthesize deviceAppVersion=_deviceAppVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceAppBundleId; 
@property (nonatomic,retain) NSString * deviceAppBundleId;                           //@synthesize deviceAppBundleId=_deviceAppBundleId - In the implementation block
+(Class)devicePreferredLanguageType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)devicePushToken;
-(void)setDevicePushToken:(NSString *)arg1 ;
-(BOOL)hasDevicePushToken;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(NSString *)deviceOsVersion;
-(BOOL)hasDeviceOsVersion;
-(BOOL)hasDeviceType;
-(void)setDeviceTokenEnv:(int)arg1 ;
-(void)setDevicePreferredLanguages:(NSMutableArray *)arg1 ;
-(void)setDeviceAppVersion:(NSString *)arg1 ;
-(void)setDeviceAppBundleId:(NSString *)arg1 ;
-(void)setDeviceTimezone:(NSString *)arg1 ;
-(void)setDeviceUtcOffset:(long long)arg1 ;
-(void)setDeviceDstOffset:(long long)arg1 ;
-(void)addDevicePreferredLanguage:(id)arg1 ;
-(BOOL)hasDeviceTimezone;
-(int)deviceTokenEnv;
-(void)setHasDeviceTokenEnv:(BOOL)arg1 ;
-(BOOL)hasDeviceTokenEnv;
-(void)clearDevicePreferredLanguages;
-(unsigned long long)devicePreferredLanguagesCount;
-(id)devicePreferredLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setHasDeviceUtcOffset:(BOOL)arg1 ;
-(BOOL)hasDeviceUtcOffset;
-(void)setHasDeviceDstOffset:(BOOL)arg1 ;
-(BOOL)hasDeviceDstOffset;
-(BOOL)hasDeviceAppVersion;
-(BOOL)hasDeviceAppBundleId;
-(NSString *)deviceTimezone;
-(NSMutableArray *)devicePreferredLanguages;
-(long long)deviceUtcOffset;
-(long long)deviceDstOffset;
-(NSString *)deviceAppVersion;
-(NSString *)deviceAppBundleId;
@end

