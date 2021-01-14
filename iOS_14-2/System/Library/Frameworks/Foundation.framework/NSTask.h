/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSURL, NSArray, NSDictionary;

@interface NSTask : NSObject

@property (copy) NSURL * executableURL; 
@property (copy) NSArray * arguments; 
@property (copy) NSDictionary * environment; 
@property (copy) NSURL * currentDirectoryURL; 
@property (retain) id standardInput; 
@property (retain) id standardOutput; 
@property (retain) id standardError; 
@property (readonly) int processIdentifier; 
@property (getter=isRunning,readonly) BOOL running; 
@property (readonly) int terminationStatus; 
@property (readonly) long long terminationReason; 
@property (copy) id terminationHandler; 
@property (assign) long long qualityOfService; 
+(id)launchedTaskWithExecutableURL:(id)arg1 arguments:(id)arg2 error:(out id*)arg3 terminationHandler:(/*^block*/id)arg4 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)launchedTaskWithDictionary:(id)arg1 ;
+(id)currentTaskDictionary;
-(void)setQualityOfService:(long long)arg1 ;
-(void)launch;
-(BOOL)suspend;
-(int)processIdentifier;
-(id)init;
-(void)interrupt;
-(void)setArguments:(NSArray *)arg1 ;
-(long long)suspendCount;
-(long long)terminationReason;
-(id)terminationHandler;
-(void)terminate;
-(id)launchPath;
-(id)currentDirectoryPath;
-(NSArray *)arguments;
-(void)setSpawnedProcessDisclaimed:(BOOL)arg1 ;
-(id)standardInput;
-(id)standardError;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(int)terminationStatus;
-(void)setExecutableURL:(NSURL *)arg1 ;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(BOOL)isSpawnedProcessDisclaimed;
-(void)setLaunchPath:(id)arg1 ;
-(id)standardOutput;
-(BOOL)launchAndReturnError:(id*)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(NSURL *)currentDirectoryURL;
-(void)setStandardOutput:(id)arg1 ;
-(void)setTerminationHandler:(id)arg1 ;
-(void)setCurrentDirectoryURL:(NSURL *)arg1 ;
-(BOOL)isRunning;
-(NSURL *)executableURL;
-(NSDictionary *)environment;
-(long long)qualityOfService;
-(BOOL)resume;
@end

