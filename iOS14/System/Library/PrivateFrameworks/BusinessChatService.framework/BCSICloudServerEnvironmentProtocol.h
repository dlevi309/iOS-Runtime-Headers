/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

@class NSString, NSDictionary;


@protocol BCSICloudServerEnvironmentProtocol
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * containerID; 
@property (nonatomic,readonly) long long containerEnvironment; 
@property (nonatomic,readonly) NSDictionary * additionalRequestHTTPHeaders; 
@required
-(NSDictionary *)additionalRequestHTTPHeaders;
-(NSString *)containerID;
-(long long)type;
-(long long)containerEnvironment;

@end

