/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class NSString;

@interface ENAdvertisementMetadata : NSObject {

	char _txPower;
	unsigned char _calibrationConfidence;
	long long _version;

}

@property (nonatomic,readonly) long long version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionString; 
@property (nonatomic,readonly) char txPower;                                     //@synthesize txPower=_txPower - In the implementation block
@property (nonatomic,readonly) unsigned char calibrationConfidence;              //@synthesize calibrationConfidence=_calibrationConfidence - In the implementation block
-(NSString *)versionString;
-(char)txPower;
-(long long)version;
-(unsigned char)calibrationConfidence;
-(id)initWithVersion:(long long)arg1 txPower:(char)arg2 calibrationConfidence:(unsigned char)arg3 ;
-(unsigned char)attenuationForRSSI:(char)arg1 saturated:(BOOL)arg2 ;
@end

