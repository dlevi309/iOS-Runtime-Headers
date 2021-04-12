/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

