/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSDecimalNumber, NSString;


@protocol INCurrencyAmountExport <NSObject,JSExport>
@property (nonatomic,copy) NSDecimalNumber * amount; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
-(NSString *)currencyCode;
-(id)init;
-(void)setCurrencyCode:(id)arg1;
-(void)setAmount:(id)arg1;
-(NSDecimalNumber *)amount;

@end

