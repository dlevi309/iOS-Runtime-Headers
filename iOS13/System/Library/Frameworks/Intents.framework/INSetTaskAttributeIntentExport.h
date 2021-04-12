/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)status;
-(long long)priority;
-(void)setPriority:(long long)arg1;
-(void)setStatus:(long long)arg1;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(id)arg1;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(id)arg1;
-(INTask *)targetTask;
-(void)setTargetTask:(id)arg1;
-(INSpeakableString *)taskTitle;
-(void)setTaskTitle:(id)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;

@end

