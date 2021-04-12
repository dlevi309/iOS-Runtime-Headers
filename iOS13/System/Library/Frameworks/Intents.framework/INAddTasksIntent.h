/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long taskReference; 
@property (nonatomic,copy) NSArray * targetTaskListMembers; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@property (nonatomic,copy) INIntent * intent; 
-(id)domain;
-(id)_metadata;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(INIntent *)intent;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setIntent:(INIntent *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
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
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSArray *)contactEventTriggers;
-(void)setContactEventTriggers:(NSArray *)arg1 ;
-(NSArray *)taskTitles;
-(void)setTaskTitles:(NSArray *)arg1 ;
-(long long)taskReference;
-(INTaskList *)targetTaskList;
-(void)setTargetTaskList:(INTaskList *)arg1 ;
-(NSArray *)targetTaskListMembers;
-(void)setTargetTaskListMembers:(NSArray *)arg1 ;
-(void)setTaskReference:(long long)arg1 ;
-(id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 priority:(long long)arg5 ;
-(id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 ;
@end

