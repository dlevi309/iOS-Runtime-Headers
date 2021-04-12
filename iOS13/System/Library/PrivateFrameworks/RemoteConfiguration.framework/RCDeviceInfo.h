/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,copy,readonly) NSArray * preferredLanguages;              //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long utcOffset;                            //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) long long dstOffset;                            //@synthesize dstOffset=_dstOffset - In the implementation block
@property (nonatomic,copy,readonly) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * osVersion;                      //@synthesize osVersion=_osVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDeviceInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSArray *)preferredLanguages;
-(id)dictionaryRepresentation;
-(NSString *)deviceType;
-(NSString *)osVersion;
-(NSString *)appVersion;
-(id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 ;
-(long long)utcOffset;
-(long long)dstOffset;
@end

