/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class NSString, NSDictionary;


@protocol HMRemoteLoginMessageProtocol <NSObject,NSSecureCoding>
@property (nonatomic,copy,readonly) NSString * messageName; 
@property (nonatomic,copy,readonly) NSString * xpcMessageName; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
@required
+(NSString *)messageName;
+(id)objWithDict:(id)arg1;
+(id)objWithMessage:(id)arg1;
+(NSString *)xpcMessageName;
-(NSString *)messageName;
-(NSDictionary *)messagePayload;
-(NSString *)xpcMessageName;

@end

