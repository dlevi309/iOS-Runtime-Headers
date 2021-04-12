/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASPosixUtils : NSObject
+(int)runCommandWithPath:(const char*)arg1 argv:(const char**)arg2 envp:(const char**)arg3 handleStdout:(/*^block*/id)arg4 handleStderr:(/*^block*/id)arg5 ;
+(int)runCommandWithPath:(const char*)arg1 argv:(const char**)arg2 envp:(const char**)arg3 stdoutData:(id*)arg4 stderrData:(id*)arg5 ;
@end

