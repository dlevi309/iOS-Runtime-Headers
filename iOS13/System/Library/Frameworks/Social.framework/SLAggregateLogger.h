/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@interface SLAggregateLogger : NSObject
+(void)logWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(void)logFacebookPost:(id)arg1 fromProcessWithPID:(int)arg2 ;
+(void)logTweetWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(id)_logIdentifierForPID:(int)arg1 ;
+(void)logPostWithServiceNameKey:(id)arg1 text:(id)arg2 attachments:(id)arg3 locationAttached:(BOOL)arg4 fromProcessWithPID:(int)arg5 ;
+(BOOL)_attachmentsContainImage:(id)arg1 ;
+(BOOL)_attachmentsContainURL:(id)arg1 ;
+(void)logFacebookAppInstallChoice:(BOOL)arg1 ;
+(void)logTwitterAppInstallChoice:(BOOL)arg1 ;
+(void)logTencentWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(void)logWeiboAppInstallChoice:(BOOL)arg1 ;
+(void)logTencentWeiboAppInstallChoice:(BOOL)arg1 ;
+(void)logFlickrAppInstallChoice:(BOOL)arg1 ;
+(void)logVimeoAppInstallChoice:(BOOL)arg1 ;
@end

