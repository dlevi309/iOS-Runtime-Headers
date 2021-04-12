/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INTransferMoneyIntentExport.h>

@class INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString;

@interface INTransferMoneyIntent : INIntent <INTransferMoneyIntentExport>

@property (nonatomic,copy,readonly) INPaymentAccount * fromAccount; 
@property (nonatomic,copy,readonly) INPaymentAccount * toAccount; 
@property (nonatomic,copy,readonly) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy,readonly) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy,readonly) NSString * transactionNote; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INPaymentAccount *)toAccount;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(INPaymentAccount *)arg1 ;
-(void)setToAccount:(INPaymentAccount *)arg1 ;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(INPaymentAmount *)arg1 ;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(INDateComponentsRange *)arg1 ;
-(NSString *)transactionNote;
-(void)setTransactionNote:(NSString *)arg1 ;
-(BOOL)_isUserConfirmationRequired;
-(id)initWithFromAccount:(id)arg1 toAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5 ;
@end

