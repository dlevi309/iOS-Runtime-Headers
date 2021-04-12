/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
*/


@interface OSLaunchdJobExitStatus : NSObject {

	unsigned _os_reason_namespace;
	int _wait4Status;
	unsigned long long _os_reason_flags;
	unsigned long long _os_reason_code;

}

@property (nonatomic,readonly) unsigned long long os_reason_flags;              //@synthesize os_reason_flags=_os_reason_flags - In the implementation block
@property (nonatomic,readonly) unsigned os_reason_namespace;                    //@synthesize os_reason_namespace=_os_reason_namespace - In the implementation block
@property (nonatomic,readonly) unsigned long long os_reason_code;               //@synthesize os_reason_code=_os_reason_code - In the implementation block
@property (nonatomic,readonly) int wait4Status;                                 //@synthesize wait4Status=_wait4Status - In the implementation block
-(unsigned long long)os_reason_flags;
-(unsigned long long)os_reason_code;
-(unsigned)os_reason_namespace;
-(id)initWithWait4Status:(int)arg1 os_reason_namespace:(unsigned)arg2 os_reason_code:(unsigned long long)arg3 os_reason_flags:(unsigned long long)arg4 ;
-(int)wait4Status;
@end

