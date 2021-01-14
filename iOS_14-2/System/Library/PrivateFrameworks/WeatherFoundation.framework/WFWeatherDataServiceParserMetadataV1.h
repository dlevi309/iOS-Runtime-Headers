/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSDate, WFLocation, NSString, NSURL;

@interface WFWeatherDataServiceParserMetadataV1 : NSObject {

	BOOL _temporarilyUnavailable;
	NSDate* _readDate;
	NSDate* _expireDate;
	unsigned long long _version;
	WFLocation* _location;
	NSString* _language;
	NSString* _providerName;
	NSURL* _providerLogoURL;
	long long _dataOrigination;

}

@property (nonatomic,copy) NSDate * readDate;                          //@synthesize readDate=_readDate - In the implementation block
@property (nonatomic,copy) NSDate * expireDate;                        //@synthesize expireDate=_expireDate - In the implementation block
@property (assign,nonatomic) unsigned long long version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) WFLocation * location;                    //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * language;                        //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * providerName;                    //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy) NSURL * providerLogoURL;                    //@synthesize providerLogoURL=_providerLogoURL - In the implementation block
@property (assign,nonatomic) long long dataOrigination;                //@synthesize dataOrigination=_dataOrigination - In the implementation block
@property (assign,nonatomic) BOOL temporarilyUnavailable;              //@synthesize temporarilyUnavailable=_temporarilyUnavailable - In the implementation block
-(void)setTemporarilyUnavailable:(BOOL)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(WFLocation *)location;
-(BOOL)temporarilyUnavailable;
-(void)setExpireDate:(NSDate *)arg1 ;
-(void)setDataOrigination:(long long)arg1 ;
-(NSDate *)readDate;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)setReadDate:(NSDate *)arg1 ;
-(void)setProviderLogoURL:(NSURL *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(NSURL *)providerLogoURL;
-(long long)dataOrigination;
-(unsigned long long)version;
-(NSString *)language;
-(NSString *)providerName;
-(NSDate *)expireDate;
@end

