/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INUpdateAlarmIntentExport.h>

@class INAlarmSearch, INAlarm, INDateComponentsRange, INSpeakableString, NSString;

@interface INUpdateAlarmIntent : INIntent <INUpdateAlarmIntentExport>

@property (nonatomic,copy,readonly) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy,readonly) INAlarm * alarm; 
@property (nonatomic,readonly) long long operation; 
@property (nonatomic,copy,readonly) INDateComponentsRange * proposedTime; 
@property (nonatomic,copy,readonly) INSpeakableString * proposedLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(void)setOperation:(long long)arg1 ;
-(id)_metadata;
-(long long)operation;
-(INDateComponentsRange *)proposedTime;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(void)setProposedTime:(INDateComponentsRange *)arg1 ;
-(void)setAlarm:(INAlarm *)arg1 ;
-(id)domain;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(INAlarmSearch *)arg1 ;
-(INSpeakableString *)proposedLabel;
-(void)setProposedLabel:(INSpeakableString *)arg1 ;
-(id)initWithAlarmSearch:(id)arg1 alarm:(id)arg2 operation:(long long)arg3 proposedTime:(id)arg4 proposedLabel:(id)arg5 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INAlarm *)alarm;
@end

