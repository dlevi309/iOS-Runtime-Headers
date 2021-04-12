/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INResumeWorkoutIntentExport.h>

@class INSpeakableString, NSString;

@interface INResumeWorkoutIntent : INIntent <INResumeWorkoutIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * workoutName; 
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
-(id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2 ;
-(INSpeakableString *)workoutName;
-(void)setWorkoutName:(INSpeakableString *)arg1 ;
-(id)initWithWorkoutName:(id)arg1 ;
@end

