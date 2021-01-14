/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/


@class NSUserDefaults;

@interface HAPreferences : NSObject {

	NSUserDefaults* _globalDefaults;
	BOOL _sensitiveLoggingEnabled;

}

@property (readonly) BOOL sensitiveLoggingEnabled;              //@synthesize sensitiveLoggingEnabled=_sensitiveLoggingEnabled - In the implementation block
+(id)sharedPreferences;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(BOOL)sensitiveLoggingEnabled;
@end

