/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

