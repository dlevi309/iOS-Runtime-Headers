/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/


@class NSUserDefaults, NSMutableDictionary;

@interface ADDefaults : NSObject {

	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _currentDefaults;

}
+(id)defaults;
+(long long)logLevel;
+(id)intermediatePathOverride;
+(id)getDefaultValues;
+(BOOL)jasperColorStillsRunCorrection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dealloc;
@end

