/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchAlarmIntentExport.h>

@class INAlarmSearch, NSArray, NSString;

@interface INSearchAlarmIntent : INIntent <INSearchAlarmIntentExport>

@property (nonatomic,copy,readonly) INAlarmSearch * alarmSearch; 
@property (nonatomic,readonly) long long alarmSearchType; 
@property (nonatomic,copy,readonly) NSArray * alarms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)alarms;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(INAlarmSearch *)arg1 ;
-(long long)alarmSearchType;
-(void)setAlarmSearchType:(long long)arg1 ;
-(id)initWithAlarmSearch:(id)arg1 alarmSearchType:(long long)arg2 alarms:(id)arg3 ;
-(void)setAlarms:(NSArray *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
@end

