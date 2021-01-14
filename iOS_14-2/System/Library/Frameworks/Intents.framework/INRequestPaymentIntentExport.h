/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INPerson, INCurrencyAmount, NSString;


@protocol INRequestPaymentIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * payer; 
@property (nonatomic,copy) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * note; 
@required
-(INPerson *)payer;
-(id)init;
-(void)setNote:(id)arg1;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(id)arg1;
-(NSString *)note;
-(void)setPayer:(id)arg1;

@end

