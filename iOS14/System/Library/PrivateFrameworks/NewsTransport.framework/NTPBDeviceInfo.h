/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT5 _has;

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
-(BOOL)hasDeviceType;
-(id)dictionaryRepresentation;
-(NSString *)deviceType;
-(BOOL)hasDeviceTimezone;
-(void)addDevicePreferredLanguage:(id)arg1 ;
-(void)setHasDeviceUtcOffset:(BOOL)arg1 ;
-(void)setDeviceAppBundleId:(NSString *)arg1 ;
-(NSString *)deviceAppVersion;
-(unsigned long long)devicePreferredLanguagesCount;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)deviceOsVersion;
-(NSString *)deviceAppBundleId;
-(BOOL)hasDeviceOsVersion;
-(void)setDevicePushToken:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)devicePushToken;
-(id)devicePreferredLanguageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDevicePushToken;
-(void)setDeviceTimezone:(NSString *)arg1 ;
-(void)setDeviceOsVersion:(NSString *)arg1 ;
-(BOOL)hasDeviceUtcOffset;
-(void)setHasDeviceTokenEnv:(BOOL)arg1 ;
-(id)description;
-(int)deviceTokenEnv;
-(BOOL)hasDeviceAppBundleId;
-(NSString *)deviceTimezone;
-(void)setDeviceAppVersion:(NSString *)arg1 ;
-(void)setDevicePreferredLanguages:(NSMutableArray *)arg1 ;
-(void)setDeviceUtcOffset:(long long)arg1 ;
-(void)setDeviceDstOffset:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDeviceDstOffset;
-(long long)deviceDstOffset;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)devicePreferredLanguages;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDeviceTokenEnv;
-(void)setDeviceTokenEnv:(int)arg1 ;
-(void)clearDevicePreferredLanguages;
-(BOOL)hasDeviceAppVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDeviceDstOffset:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)deviceUtcOffset;
@end

