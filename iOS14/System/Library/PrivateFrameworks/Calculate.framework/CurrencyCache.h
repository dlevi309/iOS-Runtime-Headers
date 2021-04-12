/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol OS_dispatch_queue;
@class NSDate, NSDictionary, NSString, NSNumber, NSMutableString, NSMutableDictionary, NSObject;

@interface CurrencyCache : NSObject <NSXMLParserDelegate> {

	unsigned long long _uuid;
	NSDate* _lastRefreshDate;
	NSDictionary* _currencyData;
	NSString* _currentCurrency;
	NSNumber* _currentRate;
	NSMutableString* _currentString;
	NSMutableDictionary* _mutableCurrencyCache;
	NSObject*<OS_dispatch_queue> _serializer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializer;              //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDate * lastRefreshDate; 
@property (nonatomic,retain) NSDictionary * currencyData;                          //@synthesize currencyData=_currencyData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(void)setSerializer:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)refresh;
-(unsigned long long)uuid;
-(id)_consumerKey;
-(id)init;
-(void)setCurrencyData:(NSDictionary *)arg1 ;
-(NSDictionary *)currencyData;
-(NSObject*<OS_dispatch_queue>)serializer;
-(BOOL)refreshWithTimeOut:(float)arg1 ;
-(id)createCredential;
-(id)_consumerSecret;
-(void)_queue_loadPersistedCurrencyCache;
-(BOOL)_queue_refresh;
-(void)_loadPersistedCurrencyCache;
-(NSDate *)lastRefreshDate;
-(void)_queue_persistCurrencyCache;
-(BOOL)updateCurrencyCacheWithData:(id)arg1 ;
@end

