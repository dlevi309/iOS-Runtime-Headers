/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSnoozeTasksIntentExport.h>

@class NSArray, INDateComponentsRange, NSNumber, NSString;

@interface INSnoozeTasksIntent : INIntent <INSnoozeTasksIntentExport>

@property (nonatomic,copy,readonly) NSArray * tasks; 
@property (nonatomic,copy,readonly) INDateComponentsRange * nextTriggerTime; 
@property (nonatomic,copy,readonly) NSNumber * all; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)all;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(NSArray *)tasks;
-(id)_metadata;
-(INDateComponentsRange *)nextTriggerTime;
-(void)setNextTriggerTime:(INDateComponentsRange *)arg1 ;
-(id)initWithTasks:(id)arg1 nextTriggerTime:(id)arg2 all:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setAll:(NSNumber *)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setTasks:(NSArray *)arg1 ;
@end

