/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INCreateAlarmIntentExport.h>

@class NSNumber, INDateComponentsRange, INSpeakableString, NSString;

@interface INCreateAlarmIntent : INIntent <INCreateAlarmIntentExport>

@property (nonatomic,copy,readonly) NSNumber * relativeOffsetInMinutes; 
@property (nonatomic,copy,readonly) INDateComponentsRange * time; 
@property (nonatomic,copy,readonly) INSpeakableString * label; 
@property (nonatomic,readonly) unsigned long long alarmRepeatScheduleOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(INDateComponentsRange *)time;
-(void)_setMetadata:(id)arg1 ;
-(void)setTime:(INDateComponentsRange *)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(unsigned long long)alarmRepeatScheduleOptions;
-(NSNumber *)relativeOffsetInMinutes;
-(void)setRelativeOffsetInMinutes:(NSNumber *)arg1 ;
-(void)setAlarmRepeatScheduleOptions:(unsigned long long)arg1 ;
-(id)initWithRelativeOffsetInMinutes:(id)arg1 time:(id)arg2 label:(id)arg3 alarmRepeatScheduleOptions:(unsigned long long)arg4 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setLabel:(INSpeakableString *)arg1 ;
-(INSpeakableString *)label;
@end

