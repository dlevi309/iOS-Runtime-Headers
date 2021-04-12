/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString * platformIdentifier; 
+(void)initialize;
+(id)currentPlatformIdentifier;
+(id)sharedExecutionEnvironment;
+(void)setPlatformIdentifier:(id)arg1 forQueue:(id)arg2 ;
+(void)resetPlatformIdentifierForQueue:(id)arg1 ;
-(NSString *)platformIdentifier;
@end

