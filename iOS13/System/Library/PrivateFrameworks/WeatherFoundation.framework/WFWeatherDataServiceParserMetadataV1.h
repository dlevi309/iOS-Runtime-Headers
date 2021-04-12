/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSDate, WFLocation, NSString;

@interface WFWeatherDataServiceParserMetadataV1 : NSObject {

	NSDate* _readTime;
	NSDate* _expireTime;
	unsigned long long _version;
	WFLocation* _location;
	NSString* _language;

}

@property (nonatomic,retain) NSDate * readTime;                       //@synthesize readTime=_readTime - In the implementation block
@property (nonatomic,retain) NSDate * expireTime;                     //@synthesize expireTime=_expireTime - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) WFLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * language;                     //@synthesize language=_language - In the implementation block
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(WFLocation *)location;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSDate *)readTime;
-(void)setReadTime:(NSDate *)arg1 ;
-(NSDate *)expireTime;
-(void)setExpireTime:(NSDate *)arg1 ;
@end

