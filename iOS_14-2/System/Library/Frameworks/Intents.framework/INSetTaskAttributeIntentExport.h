/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTask, INSpeakableString, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger;


@protocol INSetTaskAttributeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTask * targetTask; 
@property (nonatomic,copy) INSpeakableString * taskTitle; 
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@required
-(id)init;
-(INTask *)targetTask;
-(INSpeakableString *)taskTitle;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(id)arg1;
-(void)setTargetTask:(id)arg1;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(id)arg1;
-(void)setTaskTitle:(id)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(void)setStatus:(long long)arg1;
-(long long)priority;
-(void)setPriority:(long long)arg1;
-(long long)status;

@end

