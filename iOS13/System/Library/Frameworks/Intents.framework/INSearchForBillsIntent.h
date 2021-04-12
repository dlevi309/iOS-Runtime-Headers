/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)domain;
-(long long)status;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INBillPayee *)billPayee;
-(void)setBillPayee:(INBillPayee *)arg1 ;
-(long long)billType;
-(void)setBillType:(long long)arg1 ;
-(INDateComponentsRange *)dueDateRange;
-(void)setDueDateRange:(INDateComponentsRange *)arg1 ;
-(INDateComponentsRange *)paymentDateRange;
-(void)setPaymentDateRange:(INDateComponentsRange *)arg1 ;
-(id)initWithBillPayee:(id)arg1 paymentDateRange:(id)arg2 billType:(long long)arg3 status:(long long)arg4 dueDateRange:(id)arg5 ;
@end

