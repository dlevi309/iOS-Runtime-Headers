/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetCarLockStatusIntentExport.h>

@class NSNumber, INSpeakableString, NSString;

@interface INSetCarLockStatusIntent : INIntent <INSetCarLockStatusIntentExport>

@property (nonatomic,copy,readonly) NSNumber * locked; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)locked;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(INSpeakableString *)carName;
-(id)_metadata;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(void)setLocked:(NSNumber *)arg1 ;
-(id)initWithLocked:(id)arg1 carName:(id)arg2 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
@end

