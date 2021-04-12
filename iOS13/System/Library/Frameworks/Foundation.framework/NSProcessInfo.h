/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSDictionary, NSArray, NSString;

@interface NSProcessInfo : NSObject {

	NSDictionary* environment;
	NSArray* arguments;
	NSString* hostName;
	NSString* name;
	long long automaticTerminationOptOutCounter;

}

@property (copy,readonly) NSString * userName; 
@property (copy,readonly) NSString * fullUserName; 
@property (getter=isMacCatalystApp,readonly) BOOL macCatalystApp; 
@property (copy,readonly) NSDictionary * environment; 
@property (copy,readonly) NSArray * arguments; 
@property (copy,readonly) NSString * hostName; 
@property (copy) NSString * processName; 
@property (readonly) int processIdentifier; 
@property (copy,readonly) NSString * globallyUniqueString; 
@property (copy,readonly) NSString * operatingSystemVersionString; 
@property (readonly) SCD_Struct_NS44 operatingSystemVersion; 
@property (readonly) unsigned long long processorCount; 
@property (readonly) unsigned long long activeProcessorCount; 
@property (readonly) unsigned long long physicalMemory; 
@property (readonly) double systemUptime; 
@property (assign) BOOL automaticTerminationSupportEnabled; 
+(id)processInfo;
-(void)dealloc;
-(NSString *)userName;
-(int)processIdentifier;
-(void)performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSArray *)arguments;
-(NSString *)processName;
-(void)_registerForHardwareStateNotifications;
-(unsigned long long)operatingSystem;
-(NSDictionary *)environment;
-(void)setArguments:(NSArray *)arg1 ;
-(NSString *)hostName;
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)globallyUniqueString;
-(id)userHomeDirectory;
-(id)operatingSystemName;
-(NSString *)operatingSystemVersionString;
-(SCD_Struct_NS44)operatingSystemVersion;
-(BOOL)isOperatingSystemAtLeastVersion:(SCD_Struct_NS44)arg1 ;
-(unsigned long long)processorCount;
-(unsigned long long)activeProcessorCount;
-(unsigned long long)physicalMemory;
-(BOOL)isTranslated;
-(double)systemUptime;
-(void)disableSuddenTermination;
-(void)enableSuddenTermination;
-(void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(long long)_suddenTerminationDisablingCount;
-(void)disableAutomaticTermination:(id)arg1 ;
-(void)enableAutomaticTermination:(id)arg1 ;
-(void)setAutomaticTerminationSupportEnabled:(BOOL)arg1 ;
-(BOOL)automaticTerminationSupportEnabled;
-(void)_disableAutomaticTerminationOnly:(id)arg1 ;
-(void)_enableAutomaticTerminationOnly:(id)arg1 ;
-(void)_reactivateActivity:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endSystemBehaviorSuspension:(id)arg1 ;
-(id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endActivity:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(/*^block*/id)arg3 ;
-(long long)thermalState;
-(BOOL)isLowPowerModeEnabled;
-(BOOL)isMacCatalystApp;
@end

