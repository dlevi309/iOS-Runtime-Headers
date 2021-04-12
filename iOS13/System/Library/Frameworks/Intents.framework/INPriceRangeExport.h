/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSDecimalNumber, NSString;


@protocol INPriceRangeExport <NSObject,JSExport>
@property (nonatomic,copy) NSDecimalNumber * minimumPrice; 
@property (nonatomic,copy) NSDecimalNumber * maximumPrice; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
+(id)_priceWithPriceRangeValue:(id)arg1;
-(id)init;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(id)arg1;
-(NSDecimalNumber *)maximumPrice;
-(void)setMaximumPrice:(id)arg1;
-(NSDecimalNumber *)minimumPrice;
-(void)setMinimumPrice:(id)arg1;

@end

