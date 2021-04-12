/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/


@class NSUserDefaults;

@interface HAPreferences : NSObject {

	NSUserDefaults* _globalDefaults;
	BOOL _sensitiveLoggingEnabled;

}

@property (readonly) BOOL sensitiveLoggingEnabled;              //@synthesize sensitiveLoggingEnabled=_sensitiveLoggingEnabled - In the implementation block
+(id)sharedPreferences;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)sensitiveLoggingEnabled;
@end

