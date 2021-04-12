/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKAppContextInternalDelegate <IKAppContextDelegate>
@optional
-(BOOL)appContext:(id)arg1 shouldStartWithScript:(id)arg2 scriptURL:(id)arg3 loadedFromFallback:(BOOL)arg4;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 validatedJSString:(id)arg3;

@required
-(BOOL)shouldForceIgnoreHTTPCacheForAppContext:(id)arg1;

@end

