/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTimer, INSpeakableString;


@protocol INSetTimerAttributeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (assign,nonatomic) double toDuration; 
@property (nonatomic,copy) INSpeakableString * toLabel; 
@required
-(id)init;
-(INSpeakableString *)toLabel;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(double)toDuration;
-(void)setToLabel:(id)arg1;
-(void)setToDuration:(double)arg1;

@end

