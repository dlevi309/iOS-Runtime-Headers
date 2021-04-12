/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

