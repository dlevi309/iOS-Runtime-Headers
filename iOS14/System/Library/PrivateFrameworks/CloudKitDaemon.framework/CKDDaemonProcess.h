/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@interface CKDDaemonProcess : NSObject {

	BOOL _isSystemInstalledBinary;
	long long _processType;

}

@property (nonatomic,readonly) long long processType;                     //@synthesize processType=_processType - In the implementation block
@property (nonatomic,readonly) BOOL isSystemInstalledBinary;              //@synthesize isSystemInstalledBinary=_isSystemInstalledBinary - In the implementation block
+(id)currentProcess;
+(void)deriveCurrentProcessWithArgC:(int)arg1 argv:(const char**)arg2 ;
-(long long)processType;
-(BOOL)isSystemInstalledBinary;
-(id)_initWithProcessType:(long long)arg1 ;
-(id)_initWithArgC:(int)arg1 argv:(const char**)arg2 ;
@end

