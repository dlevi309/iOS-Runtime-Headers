/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class _INPBIntentResponse;


@protocol INIntentResponseExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) _INPBIntentResponse * backingStore; 
@property (nonatomic,readonly) long long code; 
@required
-(id)init;
-(long long)code;
-(_INPBIntentResponse *)backingStore;
-(long long)_intentHandlingStatus;
-(id)_payloadResponseMessageData;
-(void)_setPayloadResponseMessageData:(id)arg1;

@end

