/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <ProactiveSupport/_PASSqliteDefaultErrorHandler.h>

@interface SGSqliteExitOnDeviceLockErrorHandler : _PASSqliteDefaultErrorHandler {

	int _exitCode;

}
-(BOOL)handleSqliteError:(int)arg1 error:(id)arg2 onError:(/*^block*/id)arg3 db:(id)arg4 ;
-(id)initWithExitCode:(int)arg1 ;
-(void)exitOnErrorIndicatingIOError:(int)arg1 ;
@end

