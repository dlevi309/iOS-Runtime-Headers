/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTimer;


@protocol INSetTimerAttributeIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTimer * updatedTimer; 
@required
-(long long)code;
-(INTimer *)updatedTimer;
-(void)setUpdatedTimer:(id)arg1;

@end

