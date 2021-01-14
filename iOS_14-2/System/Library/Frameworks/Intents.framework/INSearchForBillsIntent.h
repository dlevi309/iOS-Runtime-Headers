/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForBillsIntentExport.h>

@class INBillPayee, INDateComponentsRange, NSString;

@interface INSearchForBillsIntent : INIntent <INSearchForBillsIntentExport>

@property (nonatomic,copy,readonly) INBillPayee * billPayee; 
@property (nonatomic,copy,readonly) INDateComponentsRange * paymentDateRange; 
@property (nonatomic,readonly) long long billType; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dueDateRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(INDateComponentsRange *)dueDateRange;
-(void)setDueDateRange:(INDateComponentsRange *)arg1 ;
-(INDateComponentsRange *)paymentDateRange;
-(void)setPaymentDateRange:(INDateComponentsRange *)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)initWithBillPayee:(id)arg1 paymentDateRange:(id)arg2 billType:(long long)arg3 status:(long long)arg4 dueDateRange:(id)arg5 ;
-(id)domain;
-(long long)billType;
-(void)setBillPayee:(INBillPayee *)arg1 ;
-(void)setBillType:(long long)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(INBillPayee *)billPayee;
-(long long)status;
@end

