/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(unsigned long long)uuid;
-(BOOL)refresh;
-(NSObject*<OS_dispatch_queue>)serializer;
-(void)setSerializer:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_consumerKey;
-(id)_consumerSecret;
-(BOOL)refreshWithTimeOut:(float)arg1 ;
-(NSDate *)lastRefreshDate;
-(NSDictionary *)currencyData;
-(id)createCredential;
-(BOOL)_queue_refresh;
-(void)_queue_persistCurrencyCache;
-(void)_loadPersistedCurrencyCache;
-(void)_queue_loadPersistedCurrencyCache;
-(BOOL)updateCurrencyCacheWithData:(id)arg1 ;
-(void)setCurrencyData:(NSDictionary *)arg1 ;
@end

