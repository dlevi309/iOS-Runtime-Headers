/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetReservationDetailsIntentExport.h>

@class INSpeakableString, NSArray, NSString;

@interface INGetReservationDetailsIntent : INIntent <INGetReservationDetailsIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * reservationContainerReference; 
@property (nonatomic,copy,readonly) NSArray * reservationItemReferences; 
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
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INSpeakableString *)reservationContainerReference;
-(void)setReservationContainerReference:(INSpeakableString *)arg1 ;
-(NSArray *)reservationItemReferences;
-(void)setReservationItemReferences:(NSArray *)arg1 ;
-(id)initWithReservationContainerReference:(id)arg1 reservationItemReferences:(id)arg2 ;
@end

