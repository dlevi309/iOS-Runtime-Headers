/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class REObserverStore, NSObject, NSArray;

@interface RERelevanceEngineDebugger : RESingleton {

	REObserverStore* _observerStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSArray * availableEngines; 
-(id)_init;
-(NSArray *)availableEngines;
-(BOOL)_isValidEngine:(id)arg1 ;
-(id)engineWithName:(id)arg1 ;
-(id)firstEngine;
-(id)diagnosticLogsForEngine:(id)arg1 ;
-(void)reloadDataSourceForEngine:(id)arg1 ;
-(id)dataSourceElementsForEngine:(id)arg1 ;
-(id)allRelevanceProviderValuesForEngine:(id)arg1 ;
-(id)orderedElementsForEngine:(id)arg1 ;
-(void)_registerEngine:(id)arg1 ;
-(void)_unregisterEngine:(id)arg1 ;
@end

