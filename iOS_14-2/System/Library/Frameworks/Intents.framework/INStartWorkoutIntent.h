/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartWorkoutIntentExport.h>

@class INSpeakableString, NSNumber, NSString;

@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * workoutName; 
@property (nonatomic,copy,readonly) NSNumber * goalValue; 
@property (nonatomic,readonly) long long workoutGoalUnitType; 
@property (nonatomic,readonly) long long workoutLocationType; 
@property (nonatomic,copy,readonly) NSNumber * isOpenEnded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2 ;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(NSNumber *)goalValue;
-(void)setGoalValue:(NSNumber *)arg1 ;
-(void)setDomain:(id)arg1 ;
-(NSNumber *)isOpenEnded;
-(void)setIsOpenEnded:(NSNumber *)arg1 ;
-(long long)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(long long)arg1 ;
-(long long)workoutLocationType;
-(void)setWorkoutLocationType:(long long)arg1 ;
-(INSpeakableString *)workoutName;
-(void)setWorkoutName:(INSpeakableString *)arg1 ;
-(id)domain;
-(id)_goalValueIntentSlotDescription;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithWorkoutName:(id)arg1 goalValue:(id)arg2 workoutGoalUnitType:(long long)arg3 workoutLocationType:(long long)arg4 isOpenEnded:(id)arg5 ;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
@end

