/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol OS_dispatch_queue, OS_os_log, _DKKnowledgeSaving, _CDLocalContext;
@class NSObject, _DASScheduler, _CDContextualKeyPath;

@interface _DASWidgetRefreshScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	_DASScheduler* _dasScheduler;
	NSObject*<OS_os_log> _log;
	id<_DKKnowledgeSaving> _store;
	id<_CDLocalContext> _context;
	_CDContextualKeyPath* _widgetOverrideKeypath;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) _DASScheduler * dasScheduler;                              //@synthesize dasScheduler=_dasScheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                  //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving> store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * widgetOverrideKeypath;              //@synthesize widgetOverrideKeypath=_widgetOverrideKeypath - In the implementation block
+(id)sharedScheduler;
-(void)setBudget:(id)arg1 ;
-(void)setStore:(id<_DKKnowledgeSaving>)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(id<_DKKnowledgeSaving>)store;
-(void)cancelActivity:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_CDLocalContext>)context;
-(_DASScheduler *)dasScheduler;
-(void)recordWidgetViews:(id)arg1 ;
-(void)recordWidgetRefreshes:(id)arg1 ;
-(void)setOverridesForWidgetIDs:(id)arg1 ;
-(id)submitRefreshForWidgetID:(id)arg1 containingAppID:(id)arg2 refreshAfter:(id)arg3 refreshBefore:(id)arg4 widgetInfo:(id)arg5 refreshHandler:(/*^block*/id)arg6 ;
-(void)submitRefreshActivity:(id)arg1 ;
-(id)createRefreshActivityForWidgetID:(id)arg1 containingAppID:(id)arg2 refreshAfter:(id)arg3 refreshBefore:(id)arg4 widgetInfo:(id)arg5 refreshHandler:(/*^block*/id)arg6 ;
-(void)setDasScheduler:(_DASScheduler *)arg1 ;
-(_CDContextualKeyPath *)widgetOverrideKeypath;
-(void)setWidgetOverrideKeypath:(_CDContextualKeyPath *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
@end

