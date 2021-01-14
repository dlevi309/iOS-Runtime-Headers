/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INResumeTimerIntentExport.h>

@class INTimer, NSNumber, NSString;

@interface INResumeTimerIntent : INIntent <INResumeTimerIntentExport>

@property (nonatomic,copy,readonly) INTimer * targetTimer; 
@property (nonatomic,copy,readonly) NSNumber * resumeMultiple; 
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
-(INTimer *)targetTimer;
-(void)setTargetTimer:(INTimer *)arg1 ;
-(void)setResumeMultiple:(NSNumber *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSNumber *)resumeMultiple;
-(id)initWithTargetTimer:(id)arg1 resumeMultiple:(id)arg2 ;
@end

