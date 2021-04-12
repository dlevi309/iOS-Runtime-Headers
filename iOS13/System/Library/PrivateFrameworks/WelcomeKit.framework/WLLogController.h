/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/


@interface WLLogController : NSObject {

	BOOL _loggingEnabled;

}
+(id)sharedLogger;
-(id)init;
-(BOOL)_loggingEnabled;
-(void)_reloadLogPreferences;
-(void)logMessageFromAddress:(void*)arg1 withLevel:(unsigned long long)arg2 format:(id)arg3 args:(char*)arg4 ;
@end

