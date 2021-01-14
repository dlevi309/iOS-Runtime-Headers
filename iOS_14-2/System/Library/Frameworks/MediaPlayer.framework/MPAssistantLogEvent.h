/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString, NSMutableDictionary;


@protocol MPAssistantLogEvent <NSObject>
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) long long eventCode; 
@property (nonatomic,readonly) NSMutableDictionary * eventPayload; 
@required
-(long long)eventCode;
-(NSString *)eventName;
-(NSMutableDictionary *)eventPayload;

@end

