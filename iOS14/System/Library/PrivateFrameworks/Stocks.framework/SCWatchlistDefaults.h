/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSArray;

@interface SCWatchlistDefaults : NSObject {

	NSArray* _defaultSymbols;

}

@property (nonatomic,copy,readonly) NSArray * defaultSymbols;              //@synthesize defaultSymbols=_defaultSymbols - In the implementation block
+(id)defaultsForCurrentCountry;
+(id)defaultsFromCarrierBundle;
+(id)_defaultSymbolsByCountryCode;
+(id)_iOS10DefaultsForCurrentCountry;
+(id)_iOS7DefaultsForCurrentCountry;
+(id)_legacyDefaultSymbolsByCountryCode;
+(id)defaultsWithDefaultSymbols:(id)arg1 ;
+(id)emptyDefaults;
+(id)defaultsHistoryForCurrentCountry;
-(NSArray *)defaultSymbols;
-(id)initWithDefaultSymbols:(id)arg1 ;
-(id)defaultsByAppendingDefaults:(id)arg1 ;
@end

