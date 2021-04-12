/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSArray;

@interface VMUProcInfo : NSObject {

	unsigned _task;
	BOOL _needTaskPortDealloc;
	NSString* _name;
	NSArray* _arguments;
	NSArray* _envVars;
	NSString* _procTableName;
	NSString* _realAppName;
	NSString* _requestedAppName;
	NSString* _firstArg;
	int _pid;
	int _ppid;
	timeval _startTime;

}
+(id)getProcessIds;
+(int)processParentId:(int)arg1 ;
+(BOOL)isProcessRunning:(int)arg1 ;
-(int)ppid;
-(unsigned)platform;
-(BOOL)signal:(int)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(int)pid;
-(unsigned)task;
-(id)realAppName;
-(id)init;
-(id)platformName;
-(BOOL)terminate;
-(BOOL)isCFM;
-(id)name;
-(id)envVars;
-(id)arguments;
-(void)update;
-(id)description;
-(long long)compareByName:(id)arg1 ;
-(id)initWithPid:(int)arg1 ;
-(id)firstArgument;
-(BOOL)isApp;
-(BOOL)isNative;
-(id)valueForEnvVar:(id)arg1 ;
-(int)cpuType;
-(unsigned long long)hash;
-(BOOL)isRunning;
-(id)requestedAppName;
-(id)_infoFromCommandLine:(int)arg1 ;
-(id)userAppName;
-(long long)compareByUserAppName:(id)arg1 ;
-(BOOL)isMachO;
-(id)procTableName;
-(timeval)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

