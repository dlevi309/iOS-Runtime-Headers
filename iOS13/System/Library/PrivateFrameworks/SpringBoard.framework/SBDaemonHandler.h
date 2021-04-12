/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBDaemonHandler : NSObject
+(void)initialize;
+(id)stateDescription;
+(BOOL)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3 ;
+(void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2 ;
+(void)noteDaemonCanceled:(id)arg1 ;
@end

