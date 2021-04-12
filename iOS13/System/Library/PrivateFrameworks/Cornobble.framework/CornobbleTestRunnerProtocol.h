/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
*/


@protocol CornobbleTestRunnerProtocol <NSObject>
@required
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(BOOL)arg4;
+(void)performFingerOnGlassScrollWithParameters:(id)arg1;
+(void)performTestNamed:(id)arg1 withEventStream:(id)arg2 completionHandler:(/*^block*/id)arg3;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(BOOL)arg4 completionHandler:(/*^block*/id)arg5;
+(void)performTestNamed:(id)arg1 usingComposer:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3;
+(void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3 completionHandler:(/*^block*/id)arg4;
+(void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3 completionHandler:(/*^block*/id)arg4;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2;
+(void)performTestNamed:(id)arg1 usingComposer:(/*^block*/id)arg2;
+(void)performTestNamed:(id)arg1 withEventStream:(id)arg2;
+(void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3;
+(void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3;

@end

