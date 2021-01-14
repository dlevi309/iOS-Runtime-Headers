/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INPerson, INCurrencyAmount, NSString;


@protocol INSendPaymentIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * payee; 
@property (nonatomic,copy) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * note; 
@required
-(INPerson *)payee;
-(id)init;
-(void)setPayee:(id)arg1;
-(void)setNote:(id)arg1;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(id)arg1;
-(NSString *)note;

@end

