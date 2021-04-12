/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@class NSLock, NSMutableDictionary, REPredictedActionServer;

@interface RERecentActionManager : RESingleton {

	NSLock* _lock;
	NSMutableDictionary* _dateValues;
	REPredictedActionServer* _server;

}
-(id)_init;
-(void)dealloc;
-(id)lastPerformedDateForAction:(id)arg1 ;
-(unsigned long long)actionNumberOfTimesPeformedToday:(id)arg1 ;
-(BOOL)actionWasPerformedLocally:(id)arg1 ;
-(void)_handleRecentActionNotification:(id)arg1 ;
-(void)_storePerformAction:(id)arg1 date:(id)arg2 remote:(BOOL)arg3 ;
-(id)_dataForAction:(id)arg1 ;
-(void)didPerformAction:(id)arg1 ;
@end

