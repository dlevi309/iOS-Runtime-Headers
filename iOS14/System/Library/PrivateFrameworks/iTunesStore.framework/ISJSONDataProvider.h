/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISDataProvider.h>

@interface ISJSONDataProvider : ISDataProvider {

	unsigned long long _options;

}

@property (assign) unsigned long long parserOptions;              //@synthesize options=_options - In the implementation block
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(unsigned long long)parserOptions;
-(void)setParserOptions:(unsigned long long)arg1 ;
@end

