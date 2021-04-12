/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDWiFiOtaSystemInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _beaconInfo;
	NSString* _bssid;
	unsigned _channel;
	unsigned _channelWidth;
	NSString* _locale;
	NSString* _localeSource;
	NSString* _ssid;
	NSString* _wpsConfigMethods;
	NSString* _wpsDeviceNameData;
	NSString* _wpsDeviceNameElement;
	NSString* _wpsManufacturerElement;
	NSString* _wpsModelName;
	NSString* _wpsModelNumber;
	NSString* _wpsPrimaryDeviceTypeCategory;
	NSString* _wpsPrimaryDeviceTypeSubCategory;
	NSString* _wpsResponseType;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasBeaconInfo; 
@property (nonatomic,retain) NSData * beaconInfo;                                     //@synthesize beaconInfo=_beaconInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSsid; 
@property (nonatomic,retain) NSString * ssid;                                         //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) BOOL hasBssid; 
@property (nonatomic,retain) NSString * bssid;                                        //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsResponseType; 
@property (nonatomic,retain) NSString * wpsResponseType;                              //@synthesize wpsResponseType=_wpsResponseType - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsManufacturerElement; 
@property (nonatomic,retain) NSString * wpsManufacturerElement;                       //@synthesize wpsManufacturerElement=_wpsManufacturerElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelName; 
@property (nonatomic,retain) NSString * wpsModelName;                                 //@synthesize wpsModelName=_wpsModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelNumber; 
@property (nonatomic,retain) NSString * wpsModelNumber;                               //@synthesize wpsModelNumber=_wpsModelNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeCategory;                 //@synthesize wpsPrimaryDeviceTypeCategory=_wpsPrimaryDeviceTypeCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeSubCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeSubCategory;              //@synthesize wpsPrimaryDeviceTypeSubCategory=_wpsPrimaryDeviceTypeSubCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameElement; 
@property (nonatomic,retain) NSString * wpsDeviceNameElement;                         //@synthesize wpsDeviceNameElement=_wpsDeviceNameElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameData; 
@property (nonatomic,retain) NSString * wpsDeviceNameData;                            //@synthesize wpsDeviceNameData=_wpsDeviceNameData - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsConfigMethods; 
@property (nonatomic,retain) NSString * wpsConfigMethods;                             //@synthesize wpsConfigMethods=_wpsConfigMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleSource; 
@property (nonatomic,retain) NSString * localeSource;                                 //@synthesize localeSource=_localeSource - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                        //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasChannelWidth; 
@property (assign,nonatomic) unsigned channelWidth;                                   //@synthesize channelWidth=_channelWidth - In the implementation block
-(void)setChannelWidth:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasWpsDeviceNameData;
-(NSString *)wpsResponseType;
-(NSString *)locale;
-(void)setLocaleSource:(NSString *)arg1 ;
-(BOOL)hasLocale;
-(void)setSsid:(NSString *)arg1 ;
-(void)setWpsDeviceNameData:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(NSString *)wpsPrimaryDeviceTypeSubCategory;
-(BOOL)hasWpsManufacturerElement;
-(BOOL)hasWpsModelNumber;
-(unsigned long long)timestamp;
-(BOOL)hasWpsDeviceNameElement;
-(NSString *)ssid;
-(void)setChannel:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)wpsConfigMethods;
-(NSString *)wpsModelName;
-(void)setWpsDeviceNameElement:(NSString *)arg1 ;
-(unsigned)channel;
-(NSString *)localeSource;
-(id)description;
-(void)setHasChannelWidth:(BOOL)arg1 ;
-(void)setWpsConfigMethods:(NSString *)arg1 ;
-(BOOL)hasChannelWidth;
-(unsigned)channelWidth;
-(void)setWpsResponseType:(NSString *)arg1 ;
-(NSString *)wpsDeviceNameData;
-(BOOL)hasChannel;
-(NSString *)bssid;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setWpsModelName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasWpsPrimaryDeviceTypeCategory;
-(void)setWpsPrimaryDeviceTypeSubCategory:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)wpsDeviceNameElement;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLocaleSource;
-(BOOL)hasWpsResponseType;
-(NSString *)wpsModelNumber;
-(void)copyTo:(id)arg1 ;
-(NSString *)wpsManufacturerElement;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasWpsConfigMethods;
-(BOOL)hasWpsModelName;
-(void)setWpsManufacturerElement:(NSString *)arg1 ;
-(NSData *)beaconInfo;
-(void)setBeaconInfo:(NSData *)arg1 ;
-(BOOL)hasBeaconInfo;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasSsid;
-(BOOL)hasWpsPrimaryDeviceTypeSubCategory;
-(NSString *)wpsPrimaryDeviceTypeCategory;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setWpsPrimaryDeviceTypeCategory:(NSString *)arg1 ;
-(BOOL)hasBssid;
@end

