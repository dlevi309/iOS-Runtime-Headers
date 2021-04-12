/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSHashTable;

@interface HDDiagnosticManager : NSObject {

	NSHashTable* _objects;
	os_unfair_lock_s _lock;

}
+(id)sharedDiagnosticManager;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)logAllDiagnostics;
-(id)_diagnosticsForKeys:(id)arg1 shouldLog:(BOOL)arg2 ;
-(id)_diagnosticsOverview;
-(id)diagnosticsForKeys:(id)arg1 ;
@end

