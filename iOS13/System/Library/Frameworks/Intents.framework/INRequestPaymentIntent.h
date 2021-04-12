/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(NSString *)note;
-(void)setNote:(NSString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(BOOL)_isUserConfirmationRequired;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(INCurrencyAmount *)arg1 ;
-(INPerson *)payer;
-(void)setPayer:(INPerson *)arg1 ;
-(id)initWithPayer:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3 ;
@end

