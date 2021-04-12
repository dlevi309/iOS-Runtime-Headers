/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(id)init;
-(NSString *)UUID;
-(BOOL)isNetworkReachable;
-(id)_cacheDirectoryPath;
-(void)resetLocale;
-(id)serviceDebuggingPath;
-(BOOL)serviceDebugging;
-(id)defaultBacksideLogoURL;
-(id)backsideLogoURL;
-(id)stocksYQLBaseURL;
-(id)signedRequestForURL:(id)arg1 parameters:(id)arg2 ;
-(void)setRequestCountryCode:(NSString *)arg1 ;
-(void)setRequestLanguageCode:(NSString *)arg1 ;
-(void)setAcceptLanguageCode:(NSString *)arg1 ;
-(NSString *)requestCountryCode;
-(NSString *)requestLanguageCode;
-(id)stocksLanguageCodeForLanguage:(id)arg1 ;
-(NSString *)acceptLanguageCode;
-(id)_stocksUserAgent;
-(id)stocksCountryCode;
-(id)_stocksAcceptLanguage;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(id)stocksLanguageCode;
-(void)addStocksHeadersToPostRequest:(id)arg1 ;
-(id)financeRequestAttributes;
-(id)_urlStringWithHost:(id)arg1 ;
-(id)fullQuoteURLOverrideForStock:(id)arg1 ;
-(id)logoButtonImage;
-(id)logoBacksideImage;
@end

