/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INIntent, INIntentResponse, NSDateInterval;


@protocol INInteractionExport <NSObject,JSExport>
@property (nonatomic,copy) INIntent * intent; 
@property (nonatomic,copy) INIntentResponse * intentResponse; 
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@required
-(id)init;
-(INIntent *)intent;
-(NSDateInterval *)dateInterval;
-(void)setIntent:(id)arg1;
-(INIntentResponse *)intentResponse;
-(void)setDateInterval:(id)arg1;
-(void)setIntentResponse:(id)arg1;

@end

