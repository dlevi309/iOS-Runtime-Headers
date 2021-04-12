/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue;
@class NSObject, CKDatabase;

@interface VCCKVoiceShortcutFetcher : NSObject {

	BOOL _completed;
	NSObject*<OS_dispatch_queue> _queue;
	CKDatabase* _database;
	long long _qualityOfService;
	/*^block*/id _recordHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                      //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy,readonly) id recordHandler;                           //@synthesize recordHandler=_recordHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL completed;                                    //@synthesize completed=_completed - In the implementation block
-(void)addOperation:(id)arg1 ;
-(void)start;
-(BOOL)completed;
-(id)completionHandler;
-(void)setCompleted:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(CKDatabase *)database;
-(long long)qualityOfService;
-(id)initWithRecordHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchRecordZones;
-(void)fetchRecordsFromZone:(id)arg1 ;
-(id)recordHandler;
@end

