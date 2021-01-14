/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INCreateTimerIntentExport.h>

@class INSpeakableString, NSString;

@interface INCreateTimerIntent : INIntent <INCreateTimerIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * label; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)domain;
-(long long)type;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setLabel:(INSpeakableString *)arg1 ;
-(double)duration;
-(INSpeakableString *)label;
-(id)initWithLabel:(id)arg1 duration:(double)arg2 type:(long long)arg3 ;
@end

