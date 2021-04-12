/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EMThreadScope, NSMutableSet;

@interface _EDThreadMigrationState : NSObject {

	EMThreadScope* _threadScope;
	NSMutableSet* _objectIDsToMigrate;
	NSMutableSet* _recentlyMigratedObjectIDs;
	unsigned long long _state;

}

@property (nonatomic,readonly) EMThreadScope * threadScope;                           //@synthesize threadScope=_threadScope - In the implementation block
@property (nonatomic,readonly) NSMutableSet * objectIDsToMigrate;                     //@synthesize objectIDsToMigrate=_objectIDsToMigrate - In the implementation block
@property (nonatomic,readonly) NSMutableSet * recentlyMigratedObjectIDs;              //@synthesize recentlyMigratedObjectIDs=_recentlyMigratedObjectIDs - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)fail;
-(EMThreadScope *)threadScope;
-(id)initWithThreadScope:(id)arg1 ;
-(NSMutableSet *)objectIDsToMigrate;
-(NSMutableSet *)recentlyMigratedObjectIDs;
-(id)nextBatch;
-(BOOL)removeMigratedObjectIDs:(id)arg1 ;
-(BOOL)addObjectIDs:(id)arg1 ;
-(BOOL)changeObjectIDsToMigrate:(id)arg1 ;
-(id)deleteObjectIDsToMigrate:(id)arg1 ;
@end

