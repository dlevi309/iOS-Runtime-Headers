/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSArray;

@interface SCWatchlistDefaults : NSObject {

	NSArray* _defaultSymbols;

}

@property (nonatomic,copy,readonly) NSArray * defaultSymbols;              //@synthesize defaultSymbols=_defaultSymbols - In the implementation block
+(id)_defaultSymbolsByCountryCode;
+(id)defaultsForCurrentCountry;
+(id)_iOS10DefaultsForCurrentCountry;
+(id)_iOS7DefaultsForCurrentCountry;
+(id)defaultsFromCarrierBundle;
+(id)_legacyDefaultSymbolsByCountryCode;
+(id)defaultsWithDefaultSymbols:(id)arg1 ;
+(id)emptyDefaults;
+(id)defaultsHistoryForCurrentCountry;
-(id)initWithDefaultSymbols:(id)arg1 ;
-(id)defaultsByAppendingDefaults:(id)arg1 ;
-(NSArray *)defaultSymbols;
@end

