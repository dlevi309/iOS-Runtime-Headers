/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSDecimalNumber, NSString;


@protocol INCurrencyAmountExport <NSObject,JSExport>
@property (nonatomic,copy) NSDecimalNumber * amount; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
-(id)init;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(id)arg1;
-(NSDecimalNumber *)amount;
-(void)setAmount:(id)arg1;

@end

