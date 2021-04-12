/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INIntent, INIntentResponse, NSDateInterval;


@protocol INInteractionExport <NSObject,JSExport>
@property (nonatomic,copy) INIntent * intent; 
@property (nonatomic,copy) INIntentResponse * intentResponse; 
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@required
-(NSDateInterval *)dateInterval;
-(INIntent *)intent;
-(void)setDateInterval:(id)arg1;
-(void)setIntentResponse:(id)arg1;
-(id)init;
-(void)setIntent:(id)arg1;
-(INIntentResponse *)intentResponse;

@end

