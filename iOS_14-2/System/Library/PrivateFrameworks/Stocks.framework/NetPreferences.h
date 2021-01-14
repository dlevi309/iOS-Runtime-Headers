/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSString;

@interface NetPreferences : NSObject {

	NSString* _buildVersion;
	NSString* _productVersion;
	BOOL _serviceDebugging;
	BOOL _isNetworkReachable;
	NSString* _requestCountryCode;
	NSString* _requestLanguageCode;
	NSString* _acceptLanguageCode;
	NSString* _UUID;

}

@property (retain) NSString * requestCountryCode; 
@property (retain) NSString * requestLanguageCode; 
@property (retain) NSString * acceptLanguageCode; 
@property (assign,getter=isNetworkReachable,nonatomic) BOOL networkReachable; 
@property (nonatomic,readonly) NSString * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
+(void)clearSharedPreferences;
+(id)sharedPreferences;
-(BOOL)isNetworkReachable;
-(NSString *)UUID;
-(id)_stocksAcceptLanguage;
-(id)init;
-(id)stocksCountryCode;
-(NSString *)requestLanguageCode;
-(NSString *)acceptLanguageCode;
-(id)fullQuoteURLOverrideForStock:(id)arg1 ;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(id)stocksLanguageCodeForLanguage:(id)arg1 ;
-(void)setAcceptLanguageCode:(NSString *)arg1 ;
-(id)signedRequestForURL:(id)arg1 parameters:(id)arg2 ;
-(id)stocksLanguageCode;
-(id)defaultBacksideLogoURL;
-(id)_cacheDirectoryPath;
-(id)logoBacksideImage;
-(id)_urlStringWithHost:(id)arg1 ;
-(id)serviceDebuggingPath;
-(BOOL)serviceDebugging;
-(void)setRequestLanguageCode:(NSString *)arg1 ;
-(void)resetLocale;
-(void)setRequestCountryCode:(NSString *)arg1 ;
-(void)addStocksHeadersToPostRequest:(id)arg1 ;
-(id)backsideLogoURL;
-(NSString *)requestCountryCode;
-(id)logoButtonImage;
-(id)financeRequestAttributes;
-(id)stocksYQLBaseURL;
-(id)_stocksUserAgent;
@end

