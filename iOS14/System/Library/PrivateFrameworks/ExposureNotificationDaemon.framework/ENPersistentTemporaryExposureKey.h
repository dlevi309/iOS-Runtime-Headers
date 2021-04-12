/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class ENTemporaryExposureKey, NSString;

@interface ENPersistentTemporaryExposureKey : NSObject {

	unsigned _originalReportType;
	ENTemporaryExposureKey* _key;
	NSString* _appBundleIdentifier;
	NSString* _regionCountryCode;

}

@property (assign,nonatomic) unsigned originalReportType;                        //@synthesize originalReportType=_originalReportType - In the implementation block
@property (nonatomic,readonly) ENTemporaryExposureKey * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionCountryCode;                //@synthesize regionCountryCode=_regionCountryCode - In the implementation block
-(NSString *)appBundleIdentifier;
-(id)description;
-(ENTemporaryExposureKey *)key;
-(id)initWithTemporaryExposureKey:(id)arg1 appBundleIdentifier:(id)arg2 regionCountryCode:(id)arg3 ;
-(NSString *)regionCountryCode;
-(unsigned)originalReportType;
-(void)setOriginalReportType:(unsigned)arg1 ;
@end

