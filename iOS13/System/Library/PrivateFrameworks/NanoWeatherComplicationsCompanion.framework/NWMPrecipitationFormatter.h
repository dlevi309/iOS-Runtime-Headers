/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NWMDataFormatter.h>

@class NSNumberFormatter, NSString;

@interface NWMPrecipitationFormatter : NSObject <NWMDataFormatter> {

	NSNumberFormatter* _numberFormatter;
	NSNumberFormatter* _percentageFormatter;

}

@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                  //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * percentageFormatter;              //@synthesize percentageFormatter=_percentageFormatter - In the implementation block
@property (nonatomic,readonly) NSString * percentSymbol; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(NSString *)percentSymbol;
-(double)value:(id)arg1 ;
-(NSNumberFormatter *)percentageFormatter;
-(void)setPercentageFormatter:(NSNumberFormatter *)arg1 ;
-(id)formattedChanceOfPrecipitation:(id)arg1 style:(unsigned long long)arg2 shouldIncludePercentSymbol:(BOOL)arg3 ;
-(id)formattedChanceOfPrecipitation:(id)arg1 shouldIncludePercentSymbol:(BOOL)arg2 ;
@end

