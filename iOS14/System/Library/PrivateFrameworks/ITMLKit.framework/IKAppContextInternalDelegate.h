/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKAppContextInternalDelegate <IKAppContextDelegate>
@optional
-(BOOL)appContext:(id)arg1 shouldStartWithScript:(id)arg2 scriptURL:(id)arg3 loadedFromFallback:(BOOL)arg4;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 validatedJSString:(id)arg3;

@required
-(BOOL)shouldForceIgnoreHTTPCacheForAppContext:(id)arg1;

@end

