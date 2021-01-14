/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSDecimalNumber, NSString;


@protocol INPriceRangeExport <NSObject,JSExport>
@property (nonatomic,copy) NSDecimalNumber * minimumPrice; 
@property (nonatomic,copy) NSDecimalNumber * maximumPrice; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
+(id)_priceWithPriceRangeValue:(id)arg1;
-(NSString *)currencyCode;
-(id)init;
-(void)setCurrencyCode:(id)arg1;
-(NSDecimalNumber *)maximumPrice;
-(NSDecimalNumber *)minimumPrice;
-(void)setMaximumPrice:(id)arg1;
-(void)setMinimumPrice:(id)arg1;

@end

