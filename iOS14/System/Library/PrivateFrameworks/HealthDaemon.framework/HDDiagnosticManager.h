/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)diagnosticsForKeys:(id)arg1 ;
-(void)logAllDiagnostics;
-(void)removeObject:(id)arg1 ;
-(id)_diagnosticsForKeys:(id)arg1 shouldLog:(BOOL)arg2 ;
-(id)_diagnosticsOverview;
@end

