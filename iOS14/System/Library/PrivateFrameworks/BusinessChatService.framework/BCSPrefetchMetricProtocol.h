/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSPrefetchMetricProtocol <NSObject>
@property (nonatomic,readonly) long long type; 
@property (assign,nonatomic) BOOL successful; 
@property (assign,nonatomic) long long hoursSinceLastSuccessfulPrefetch; 
@required
-(BOOL)successful;
-(void)setSuccessful:(BOOL)arg1;
-(long long)type;
-(void)setHoursSinceLastSuccessfulPrefetch:(long long)arg1;
-(long long)hoursSinceLastSuccessfulPrefetch;

@end

