/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber, NSString, WAStartMethod, WALocationAccessData, WACellularRadioAccessTechnology;

@interface WASessionData : NSObject <AADataEventType> {

	NSNumber* _utcOffset;
	NSString* _languageCode;
	NSString* _countryCode;
	WAStartMethod* _startMethod;
	NSString* _productType;
	WALocationAccessData* _locationAccess;
	WACellularRadioAccessTechnology* _cellularRadioAccessTechnology;

}

@property (nonatomic,readonly) NSNumber * utcOffset;                                                         //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                                                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) WAStartMethod * startMethod;                                                  //@synthesize startMethod=_startMethod - In the implementation block
@property (nonatomic,readonly) NSString * productType;                                                       //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) WALocationAccessData * locationAccess;                                        //@synthesize locationAccess=_locationAccess - In the implementation block
@property (nonatomic,readonly) WACellularRadioAccessTechnology * cellularRadioAccessTechnology;              //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
+(id)dataName;
-(id)toDict;
-(WACellularRadioAccessTechnology *)cellularRadioAccessTechnology;
-(NSString *)countryCode;
-(NSNumber *)utcOffset;
-(NSString *)productType;
-(WALocationAccessData *)locationAccess;
-(NSString *)languageCode;
-(WAStartMethod *)startMethod;
-(id)initWithUtcOffset:(id)arg1 languageCode:(id)arg2 countryCode:(id)arg3 startMethod:(id)arg4 productType:(id)arg5 locationAccess:(id)arg6 cellularRadioAccessTechnology:(id)arg7 ;
@end

