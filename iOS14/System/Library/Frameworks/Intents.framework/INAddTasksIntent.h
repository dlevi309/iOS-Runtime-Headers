/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAddTasksIntentExport.h>

@class NSArray, INTaskList, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger, INIntent, NSString;

@interface INAddTasksIntent : INIntent <INAddTasksIntentExport>

@property (nonatomic,copy) NSArray * contactEventTriggers; 
@property (nonatomic,copy,readonly) INTaskList * targetTaskList; 
@property (nonatomic,copy,readonly) NSArray * taskTitles; 
@property (nonatomic,copy,readonly) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (nonatomic,readonly) long long priority; 
@property (assign,nonatomic) long long taskReference; 
@property (nonatomic,copy) NSArray * targetTaskListMembers; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@property (nonatomic,copy) INIntent * intent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(INIntent *)intent;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(void)setTaskTitles:(NSArray *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setIntent:(INIntent *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(long long)taskReference;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(INContactEventTrigger *)arg1 ;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1 ;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSArray *)contactEventTriggers;
-(void)setContactEventTriggers:(NSArray *)arg1 ;
-(INTaskList *)targetTaskList;
-(void)setTargetTaskList:(INTaskList *)arg1 ;
-(NSArray *)targetTaskListMembers;
-(void)setTargetTaskListMembers:(NSArray *)arg1 ;
-(void)setTaskReference:(long long)arg1 ;
-(NSArray *)taskTitles;
-(id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 priority:(long long)arg5 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 ;
@end

