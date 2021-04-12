/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


@interface SOConfigurationVersion : NSObject {

	long long _mode;
	int _token;
	unsigned long long _version;

}

@property (nonatomic,readonly) long long version; 
+(void)reset;
-(unsigned long long)_state;
-(id)initWithMode:(long long)arg1 ;
-(void)_setStateAndNotify:(unsigned long long)arg1 ;
-(void)setAppSSOUnavailable;
-(void)increaseVersionWithMessage:(id)arg1 ;
-(long long)checkVersion;
-(long long)version;
-(void)dealloc;
@end

