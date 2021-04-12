/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject {

	PLBackgroundJobWorker* _worker;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLBackgroundJobWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                 //@synthesize priority=_priority - In the implementation block
-(PLBackgroundJobWorker *)worker;
-(id)initWithWorker:(id)arg1 priority:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)priority;
@end

