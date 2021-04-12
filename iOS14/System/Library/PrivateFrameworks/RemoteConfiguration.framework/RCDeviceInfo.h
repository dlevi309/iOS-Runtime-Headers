/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCSerializable.h>

@class NSArray, NSString;

@interface RCDeviceInfo : NSObject <RCSerializable> {

	NSArray* _preferredLanguages;
	NSString* _deviceType;
	long long _utcOffset;
	long long _dstOffset;
	NSString* _appVersion;
	NSString* _osVersion;
	NSString* _countryCode;

}

@property (nonatomic,copy,readonly) NSArray * preferredLanguages;              //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long utcOffset;                            //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) long long dstOffset;                            //@synthesize dstOffset=_dstOffset - In the implementation block
@property (nonatomic,copy,readonly) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * osVersion;                      //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDeviceInfo;
+(id)defaultDeviceInfoWithAppVersion:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)deviceType;
-(NSString *)countryCode;
-(NSString *)appVersion;
-(long long)utcOffset;
-(NSArray *)preferredLanguages;
-(id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 countryCode:(id)arg7 ;
-(NSString *)osVersion;
-(long long)dstOffset;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
@end

