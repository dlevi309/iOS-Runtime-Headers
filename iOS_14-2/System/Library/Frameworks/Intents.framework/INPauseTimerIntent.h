/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INPauseTimerIntentExport.h>

@class INTimer, NSNumber, NSString;

@interface INPauseTimerIntent : INIntent <INPauseTimerIntentExport>

@property (nonatomic,copy,readonly) INTimer * targetTimer; 
@property (nonatomic,copy,readonly) NSNumber * pauseMultiple; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(void)setPauseMultiple:(NSNumber *)arg1 ;
-(NSNumber *)pauseMultiple;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(INTimer *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithTargetTimer:(id)arg1 pauseMultiple:(id)arg2 ;
@end

