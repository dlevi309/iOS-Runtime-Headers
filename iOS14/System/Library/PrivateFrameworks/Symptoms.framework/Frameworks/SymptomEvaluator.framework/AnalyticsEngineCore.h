/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class AnalyticsWorkspace, NSMutableDictionary, NSObject, NSDate;

@interface AnalyticsEngineCore : NSObject {

	AnalyticsWorkspace* workspace;
	NSMutableDictionary* spaces;
	NSObject*<OS_dispatch_source> mem_alerts;
	unsigned pending_mem_alerts;
	NSDate* lastWorkspaceReset;
	BOOL _enableAdHocDatabaseSave;
	BOOL _isHelper;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isHelper;                                     //@synthesize isHelper=_isHelper - In the implementation block
+(id)queue;
-(void)shutdown;
-(BOOL)isHelper;
-(void)clientEvent:(id)arg1 isAddEvent:(BOOL)arg2 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(id)setOption:(id)arg1 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 connection:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)getOption:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)clientTransactionsRelease;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 connection:(id)arg4 ;
-(void)unsubscribeToNOIs:(id)arg1 connection:(id)arg2 ;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)dealloc;
-(void)setIsHelper:(BOOL)arg1 ;
-(void)_saveAndUnloadAllState;
-(void)performQueryOnEntityCore:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)extractQueryStringFrom:(id)arg1 isGeneric:(BOOL*)arg2 ;
@end

