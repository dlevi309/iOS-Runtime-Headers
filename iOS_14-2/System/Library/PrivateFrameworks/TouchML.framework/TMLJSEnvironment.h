/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


#import <TouchML/TouchML-Structs.h>
@interface TMLJSEnvironment : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)currentContext;
+(void)forceGC;
+(void)initializeJSContext:(id)arg1 ;
+(id)convertJsValue:(id)arg1 toType:(unsigned long long)arg2 ;
+(id)sharedVM;
+(void)runInContext:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)normalizeValue:(id)arg1 toType:(unsigned long long)arg2 ;
+(id)convertTmlValue:(id)arg1 ;
+(void)applicationDidReceiveMemoryWarningNotification:(id)arg1 ;
+(id)protoJSContext;
+(id)defaultModules;
+(id)validCurrentContext;
+(void)requireModule:(id)arg1 forJSContext:(id)arg2 ;
+(id)createJSContextWithRuntimeContext:(id)arg1 ;
+(void)addGCCallback:(/*^block*/id)arg1 ;
+(void)addToDefaultModules:(id)arg1 ;
@end

