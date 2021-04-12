/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@interface YahooResponseParser : NSObject
+(void)parseData:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
+(id)parseDataSourceMapFromDataSourceDictionaries:(id)arg1 ;
+(void)parseStockQuoteDictionaries:(id)arg1 withDataSources:(id)arg2 parsedStockResult:(/*^block*/id)arg3 ;
+(void)parseExchangeDictionaries:(id)arg1 parsedExchangeResult:(/*^block*/id)arg2 ;
+(id)arrayWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 wrapResultIfDictionary:(BOOL)arg3 ;
+(id)dictionaryWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 ;
+(id)objectOfClass:(Class)arg1 withDictionaryKeyPath:(id)arg2 inJSONObject:(id)arg3 ;
+(id)objectWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 ;
@end

