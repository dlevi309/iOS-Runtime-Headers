/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)applicationState;
-(int)pid;
-(NSString *)bundleIdentifier;
@end

