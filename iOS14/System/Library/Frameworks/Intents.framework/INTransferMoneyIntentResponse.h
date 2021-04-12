/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INTransferMoneyIntentResponseExport.h>

@class INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString, INCurrencyAmount;

@interface INTransferMoneyIntentResponse : INIntentResponse <INTransferMoneyIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INPaymentAccount * fromAccount; 
@property (nonatomic,copy) INPaymentAccount * toAccount; 
@property (nonatomic,copy) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy) NSString * transactionNote; 
@property (nonatomic,copy) INCurrencyAmount * transferFee; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(INCurrencyAmount *)transferFee;
-(id)_dictionaryRepresentation;
-(void)setTransferFee:(INCurrencyAmount *)arg1 ;
-(INPaymentAccount *)toAccount;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(INPaymentAccount *)arg1 ;
-(void)setToAccount:(INPaymentAccount *)arg1 ;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(INPaymentAmount *)arg1 ;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(INDateComponentsRange *)arg1 ;
-(NSString *)transactionNote;
-(void)setTransactionNote:(NSString *)arg1 ;
-(long long)code;
@end

