/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTimer, INSpeakableString;


@protocol INSetTimerAttributeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (assign,nonatomic) double toDuration; 
@property (nonatomic,copy) INSpeakableString * toLabel; 
@required
-(id)init;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(double)toDuration;
-(void)setToDuration:(double)arg1;
-(INSpeakableString *)toLabel;
-(void)setToLabel:(id)arg1;

@end

