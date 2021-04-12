/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)arguments;
-(BOOL)isRunning;
-(BOOL)terminate;
-(void)update;
-(int)pid;
-(unsigned)task;
-(id)initWithPid:(int)arg1 ;
-(id)firstArgument;
-(timeval)startTime;
-(id)initWithTask:(unsigned)arg1 ;
-(int)ppid;
-(id)userAppName;
-(int)cpuType;
-(id)procTableName;
-(id)envVars;
-(id)valueForEnvVar:(id)arg1 ;
-(BOOL)isApp;
-(id)realAppName;
-(id)_infoFromCommandLine:(int)arg1 ;
-(id)requestedAppName;
-(BOOL)isCFM;
-(BOOL)isMachO;
-(BOOL)isNative;
-(BOOL)signal:(int)arg1 ;
-(long long)compareByName:(id)arg1 ;
-(long long)compareByUserAppName:(id)arg1 ;
@end

