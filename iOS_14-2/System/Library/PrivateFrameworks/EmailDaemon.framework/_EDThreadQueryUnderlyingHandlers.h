/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EMObjectID, EDInMemoryThreadQueryHandler, EDPrecomputedThreadQueryHandler, EDThreadMigrator;

@interface _EDThreadQueryUnderlyingHandlers : NSObject {

	EMObjectID* _inMemoryObservationID;
	EMObjectID* _precomputedObservationID;
	EDInMemoryThreadQueryHandler* _inMemoryQueryHandler;
	EDPrecomputedThreadQueryHandler* _precomputedQueryHandler;
	EDThreadMigrator* _threadMigrator;

}

@property (nonatomic,retain) EMObjectID * inMemoryObservationID;                                     //@synthesize inMemoryObservationID=_inMemoryObservationID - In the implementation block
@property (nonatomic,retain) EMObjectID * precomputedObservationID;                                  //@synthesize precomputedObservationID=_precomputedObservationID - In the implementation block
@property (nonatomic,retain) EDInMemoryThreadQueryHandler * inMemoryQueryHandler;                    //@synthesize inMemoryQueryHandler=_inMemoryQueryHandler - In the implementation block
@property (nonatomic,retain) EDPrecomputedThreadQueryHandler * precomputedQueryHandler;              //@synthesize precomputedQueryHandler=_precomputedQueryHandler - In the implementation block
@property (nonatomic,retain) EDThreadMigrator * threadMigrator;                                      //@synthesize threadMigrator=_threadMigrator - In the implementation block
-(EMObjectID *)inMemoryObservationID;
-(EMObjectID *)precomputedObservationID;
-(BOOL)_isCurrentObservationToken:(id)arg1 ;
-(void)setInMemoryObservationID:(EMObjectID *)arg1 ;
-(void)setPrecomputedObservationID:(EMObjectID *)arg1 ;
-(EDInMemoryThreadQueryHandler *)inMemoryQueryHandler;
-(void)setInMemoryQueryHandler:(EDInMemoryThreadQueryHandler *)arg1 ;
-(EDPrecomputedThreadQueryHandler *)precomputedQueryHandler;
-(void)setPrecomputedQueryHandler:(EDPrecomputedThreadQueryHandler *)arg1 ;
-(EDThreadMigrator *)threadMigrator;
-(void)setThreadMigrator:(EDThreadMigrator *)arg1 ;
@end

