/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTimer;


@protocol INSetTimerAttributeIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTimer * updatedTimer; 
@required
-(INTimer *)updatedTimer;
-(void)setUpdatedTimer:(id)arg1;
-(long long)code;

@end

