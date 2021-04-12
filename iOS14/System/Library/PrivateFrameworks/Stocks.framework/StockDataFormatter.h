/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumberFormatter, NSString;

@interface StockDataFormatter : NSObject {

	BOOL _localeUsesASCII;
	NSObject*<OS_dispatch_queue> _decimalFormatterQueue;
	NSNumberFormatter* _decimalFormatter;
	NSObject*<OS_dispatch_queue> _percentFormatterQueue;
	NSNumberFormatter* _percentFormatter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> decimalFormatterQueue;              //@synthesize decimalFormatterQueue=_decimalFormatterQueue - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * decimalFormatter;                            //@synthesize decimalFormatter=_decimalFormatter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> percentFormatterQueue;              //@synthesize percentFormatterQueue=_percentFormatterQueue - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * percentFormatter;                            //@synthesize percentFormatter=_percentFormatter - In the implementation block
@property (getter=doesLocaleUseASCII,nonatomic,readonly) BOOL localeUsesASCII;                //@synthesize localeUsesASCII=_localeUsesASCII - In the implementation block
@property (nonatomic,readonly) NSString * percentSymbol; 
+(id)sharedDataFormatter;
-(id)initPrivate;
-(NSString *)percentSymbol;
-(NSNumberFormatter *)percentFormatter;
-(void)dealloc;
-(NSNumberFormatter *)decimalFormatter;
-(id)formattedNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(BOOL)arg3 ;
-(id)formattedPriceForStock:(id)arg1 withPrecision:(unsigned long long)arg2 ;
-(id)formattedChangeInPointsForStock:(id)arg1 withPrecision:(unsigned long long)arg2 ;
-(id)formattedChangeInPercentForStock:(id)arg1 ;
-(id)formattedPriceForStock:(id)arg1 withPrecision:(unsigned long long)arg2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg3 ;
-(void)_resetLocale:(id)arg1 ;
-(id)formattedPercent:(id)arg1 ;
-(id)formattedChangeInPointsForStock:(id)arg1 withPrecision:(unsigned long long)arg2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg3 ;
-(id)formattedNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(BOOL)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg4 ;
-(NSObject*<OS_dispatch_queue>)decimalFormatterQueue;
-(id)_locked_formatNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(BOOL)arg3 ;
-(id)formattedPercent:(id)arg1 withPrecision:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)percentFormatterQueue;
-(id)_locked_formatPercent:(id)arg1 withPrecision:(unsigned long long)arg2 ;
-(void)setDecimalFormatter:(NSNumberFormatter *)arg1 ;
-(void)setPercentFormatter:(NSNumberFormatter *)arg1 ;
-(BOOL)doesLocaleUseASCII;
-(void)setDecimalFormatterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPercentFormatterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

