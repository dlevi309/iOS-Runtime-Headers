/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString;

@interface _HDProcessInfo : NSObject {

	unsigned _applicationState;
	int _pid;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned applicationState;                     //@synthesize applicationState=_applicationState - In the implementation block
@property (nonatomic,readonly) int pid;                                       //@synthesize pid=_pid - In the implementation block
+(id)processInfoWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(int)pid;
-(unsigned)applicationState;
@end

