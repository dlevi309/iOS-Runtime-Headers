/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isiOSAppOnMac,readonly) BOOL iOSAppOnMac; 
@property (copy,readonly) NSDictionary * environment; 
@property (copy,readonly) NSArray * arguments; 
@property (copy,readonly) NSString * hostName; 
@property (copy) NSString * processName; 
@property (readonly) int processIdentifier; 
@property (copy,readonly) NSString * globallyUniqueString; 
@property (copy,readonly) NSString * operatingSystemVersionString; 
@property (readonly) SCD_Struct_NS56 operatingSystemVersion; 
@property (readonly) unsigned long long processorCount; 
@property (readonly) unsigned long long activeProcessorCount; 
@property (readonly) unsigned long long physicalMemory; 
@property (readonly) double systemUptime; 
@property (assign) BOOL automaticTerminationSupportEnabled; 
+(id)processInfo;
-(id)bs_jobLabel;
-(void)_disableAutomaticTerminationWithoutSettingRelaunchable:(id)arg1 ;
-(void)_enableAutomaticTerminationWithoutSettingRelaunchable:(id)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(int)processIdentifier;
-(void)setArguments:(NSArray *)arg1 ;
-(void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(SCD_Struct_NS56)operatingSystemVersion;
-(NSString *)processName;
-(BOOL)automaticTerminationSupportEnabled;
-(NSString *)userName;
-(BOOL)isLowPowerModeEnabled;
-(BOOL)macCatalystVersionIsAtLeastVersion:(SCD_Struct_NS56)arg1 ;
-(BOOL)isOperatingSystemAtLeastVersion:(SCD_Struct_NS56)arg1 ;
-(long long)_suddenTerminationDisablingCount;
-(void)_enableAutomaticTerminationOnly:(id)arg1 ;
-(id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_registerForHardwareStateNotifications;
-(void)setAutomaticTerminationSupportEnabled:(BOOL)arg1 ;
-(void)_disableAutomaticTerminationOnly:(id)arg1 ;
-(BOOL)isTranslated;
-(double)systemUptime;
-(long long)thermalState;
-(BOOL)isiOSAppOnMac;
-(NSString *)hostName;
-(NSArray *)arguments;
-(NSString *)operatingSystemVersionString;
-(void)disableAutomaticTermination:(id)arg1 ;
-(void)endSystemBehaviorSuspension:(id)arg1 ;
-(void)disableSuddenTermination;
-(id)userHomeDirectory;
-(NSString *)globallyUniqueString;
-(unsigned long long)activeProcessorCount;
-(unsigned long long)operatingSystem;
-(void)_reactivateActivity:(id)arg1 ;
-(void)enableAutomaticTermination:(id)arg1 ;
-(unsigned long long)processorCount;
-(unsigned long long)physicalMemory;
-(BOOL)isMacCatalystApp;
-(SCD_Struct_NS56)macCatalystVersion;
-(void)enableSuddenTermination;
-(NSDictionary *)environment;
-(void)endActivity:(id)arg1 ;
-(id)operatingSystemName;
-(void)dealloc;
@end

