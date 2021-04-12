/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTimer, NSNumber;


@protocol INDeleteTimerIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (nonatomic,copy) NSNumber * deleteMultiple; 
@required
-(id)init;
-(INTimer *)targetTimer;
-(NSNumber *)deleteMultiple;
-(void)setDeleteMultiple:(id)arg1;
-(void)setTargetTimer:(id)arg1;

@end

