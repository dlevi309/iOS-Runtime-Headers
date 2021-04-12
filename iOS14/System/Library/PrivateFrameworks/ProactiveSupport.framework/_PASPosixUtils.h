/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASPosixUtils : NSObject
+(int)runCommandWithPath:(const char*)arg1 argv:(const char**)arg2 envp:(const char**)arg3 handleStdout:(/*^block*/id)arg4 handleStderr:(/*^block*/id)arg5 ;
+(int)runCommandWithPath:(const char*)arg1 argv:(const char**)arg2 envp:(const char**)arg3 stdoutData:(id*)arg4 stderrData:(id*)arg5 ;
@end

