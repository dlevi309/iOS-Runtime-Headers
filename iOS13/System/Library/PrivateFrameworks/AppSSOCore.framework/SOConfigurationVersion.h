/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


@interface SOConfigurationVersion : NSObject {

	long long _mode;
	int _token;
	unsigned long long _version;

}

@property (nonatomic,readonly) long long version; 
+(void)reset;
-(void)dealloc;
-(unsigned long long)_state;
-(long long)version;
-(id)initWithMode:(long long)arg1 ;
-(void)increaseVersionWithMessage:(id)arg1 ;
-(void)setAppSSOUnavailable;
-(long long)checkVersion;
-(void)_setStateAndNotify:(unsigned long long)arg1 ;
@end

