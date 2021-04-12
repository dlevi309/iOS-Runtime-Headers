/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTimer;


@protocol INCreateTimerIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTimer * createdTimer; 
@required
-(long long)code;
-(INTimer *)createdTimer;
-(void)setCreatedTimer:(id)arg1;

@end

