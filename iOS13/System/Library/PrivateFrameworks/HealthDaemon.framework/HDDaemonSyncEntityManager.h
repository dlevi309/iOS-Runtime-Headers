/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDDaemon, NSArray, NSDictionary;

@interface HDDaemonSyncEntityManager : NSObject {

	HDDaemon* _daemon;
	os_unfair_lock_s _lock;
	NSArray* _lock_allOrderedSyncEntities;
	NSDictionary* _lock_allSyncEntitiesByIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * orderedSyncEntities; 
@property (nonatomic,copy,readonly) NSDictionary * syncEntitiesByIdentifier; 
-(id)initWithDaemon:(id)arg1 ;
-(NSArray *)orderedSyncEntities;
-(void)_lock_loadSyncEntities;
-(NSDictionary *)syncEntitiesByIdentifier;
@end

