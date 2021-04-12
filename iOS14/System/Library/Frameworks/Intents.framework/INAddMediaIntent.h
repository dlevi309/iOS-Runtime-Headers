/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAddMediaIntentExport.h>

@class NSArray, INMediaSearch, INMediaDestination, INPrivateAddMediaIntentData, NSString;

@interface INAddMediaIntent : INIntent <INAddMediaIntentExport>

@property (nonatomic,copy,readonly) NSArray * mediaItems; 
@property (nonatomic,copy,readonly) INMediaSearch * mediaSearch; 
@property (nonatomic,copy,readonly) INMediaDestination * mediaDestination; 
@property (nonatomic,copy) INPrivateAddMediaIntentData * privateAddMediaIntentData; 
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
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSArray *)mediaItems;
-(INMediaSearch *)mediaSearch;
-(void)setMediaItems:(NSArray *)arg1 ;
-(void)setMediaSearch:(INMediaSearch *)arg1 ;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(INMediaDestination *)mediaDestination;
-(void)setMediaDestination:(INMediaDestination *)arg1 ;
-(INPrivateAddMediaIntentData *)privateAddMediaIntentData;
-(void)setPrivateAddMediaIntentData:(INPrivateAddMediaIntentData *)arg1 ;
-(id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2 mediaDestination:(id)arg3 ;
@end

