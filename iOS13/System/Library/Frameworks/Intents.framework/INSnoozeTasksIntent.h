/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(NSNumber *)all;
-(id)_dictionaryRepresentation;
-(NSArray *)tasks;
-(void)setTasks:(NSArray *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INDateComponentsRange *)nextTriggerTime;
-(void)setNextTriggerTime:(INDateComponentsRange *)arg1 ;
-(void)setAll:(NSNumber *)arg1 ;
-(id)initWithTasks:(id)arg1 nextTriggerTime:(id)arg2 all:(id)arg3 ;
@end

