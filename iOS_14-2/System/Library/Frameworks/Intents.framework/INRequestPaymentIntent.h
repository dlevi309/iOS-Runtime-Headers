/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INRequestPaymentIntentExport.h>

@class INPerson, INCurrencyAmount, NSString;

@interface INRequestPaymentIntent : INIntent <INRequestPaymentIntentExport>

@property (nonatomic,copy,readonly) INPerson * payer; 
@property (nonatomic,copy,readonly) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy,readonly) NSString * note; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(INPerson *)payer;
-(id)_metadata;
-(void)setNote:(NSString *)arg1 ;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(INCurrencyAmount *)arg1 ;
-(NSString *)note;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(BOOL)_isUserConfirmationRequired;
-(void)setPayer:(INPerson *)arg1 ;
-(id)initWithPayer:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3 ;
@end

