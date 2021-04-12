/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString * platformIdentifier; 
+(void)initialize;
+(id)currentPlatformIdentifier;
+(void)setPlatformIdentifier:(id)arg1 forQueue:(id)arg2 ;
+(id)sharedExecutionEnvironment;
+(void)resetPlatformIdentifierForQueue:(id)arg1 ;
-(NSString *)platformIdentifier;
@end

