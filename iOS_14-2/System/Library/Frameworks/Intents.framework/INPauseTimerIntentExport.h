/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTimer, NSNumber;


@protocol INPauseTimerIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (nonatomic,copy) NSNumber * pauseMultiple; 
@required
-(id)init;
-(void)setPauseMultiple:(id)arg1;
-(NSNumber *)pauseMultiple;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;

@end

