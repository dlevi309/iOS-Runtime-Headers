/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSShardItemIdentifying <NSObject>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long startIndex; 
@property (nonatomic,readonly) long long shardCount; 
@required
-(long long)startIndex;
-(long long)type;
-(long long)shardCount;

@end

