/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


#import <TouchML/TouchML-Structs.h>
@interface TMLJSEnvironment : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)currentContext;
+(void)initializeJSContext:(id)arg1 ;
+(id)convertJsValue:(id)arg1 toType:(unsigned long long)arg2 ;
+(id)sharedVM;
+(void)runInContext:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)normalizeValue:(id)arg1 toType:(unsigned long long)arg2 ;
+(id)convertTmlValue:(id)arg1 ;
+(void)applicationDidReceiveMemoryWarningNotification:(id)arg1 ;
+(void)forceGC;
+(id)protoJSContext;
+(id)defaultModules;
+(id)validCurrentContext;
+(void)requireModule:(id)arg1 forJSContext:(id)arg2 ;
+(id)createJSContextWithRuntimeContext:(id)arg1 ;
+(void)addGCCallback:(/*^block*/id)arg1 ;
+(void)addToDefaultModules:(id)arg1 ;
@end

