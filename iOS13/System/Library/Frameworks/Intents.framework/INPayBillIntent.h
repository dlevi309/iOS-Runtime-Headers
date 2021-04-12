/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INPayBillIntentExport.h>

@class INBillPayee, INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString;

@interface INPayBillIntent : INIntent <INPayBillIntentExport>

@property (nonatomic,copy,readonly) INBillPayee * billPayee; 
@property (nonatomic,copy,readonly) INPaymentAccount * fromAccount; 
@property (nonatomic,copy,readonly) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy,readonly) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy,readonly) NSString * transactionNote; 
@property (nonatomic,readonly) long long billType; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dueDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(INPaymentAccount *)arg1 ;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(INPaymentAmount *)arg1 ;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(INDateComponentsRange *)arg1 ;
-(NSString *)transactionNote;
-(void)setTransactionNote:(NSString *)arg1 ;
-(BOOL)_isUserConfirmationRequired;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(INBillPayee *)arg1 ;
-(INDateComponentsRange *)dueDate;
-(void)setDueDate:(INDateComponentsRange *)arg1 ;
-(long long)billType;
-(void)setBillType:(long long)arg1 ;
-(id)initWithBillPayee:(id)arg1 fromAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5 billType:(long long)arg6 dueDate:(id)arg7 ;
@end

