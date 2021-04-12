/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INMessage;


@protocol INSendMessageIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INMessage * sentMessage; 
@required
-(long long)code;
-(INMessage *)sentMessage;
-(void)setSentMessage:(id)arg1;

@end

