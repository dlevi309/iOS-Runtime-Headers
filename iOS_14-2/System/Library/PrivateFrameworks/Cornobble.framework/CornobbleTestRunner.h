/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
*/

#import <Cornobble/CornobbleTestRunnerProtocol.h>

@class NSString;

@interface CornobbleTestRunner : NSObject <CornobbleTestRunnerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(BOOL)arg4 ;
+(BOOL)isCornobbleAvailable;
+(void)performFingerOnGlassScrollWithParameters:(id)arg1 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 pages:(unsigned long long)arg4 canFlick:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 ;
+(void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3 ;
+(void)performTestNamed:(id)arg1 usingComposer:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)performTestNamed:(id)arg1 usingComposer:(/*^block*/id)arg2 ;
+(void)playInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)performFingerOnGlassScrollTestNamed:(id)arg1 withParameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)performTestNamed:(id)arg1 withEventStream:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)performTestNamed:(id)arg1 withRecapCommandString:(id)arg2 onView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 ;
+(void)performTestNamed:(id)arg1 withRecapFile:(id)arg2 onView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 pages:(unsigned long long)arg4 direction:(long long)arg5 canFlick:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)performTestNamed:(id)arg1 withEventStream:(id)arg2 ;
+(void)performStandardScrollingTestNamed:(id)arg1 onScrollView:(id)arg2 iterations:(unsigned long long)arg3 canFlick:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

