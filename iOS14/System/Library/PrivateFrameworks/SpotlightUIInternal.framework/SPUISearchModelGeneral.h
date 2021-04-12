/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SPUISearchModel.h>

@protocol OS_dispatch_queue;
@class SPClientSession, NSObject, NSString;

@interface SPUISearchModelGeneral : SPUISearchModel {

	SPClientSession* _session;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (retain) SPClientSession * session;                           //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * rankingDebugLog; 
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clear;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setForceStableResults:(BOOL)arg1 ;
-(id)init;
-(void)updateWithQueryContext:(id)arg1 ;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(SPClientSession *)session;
-(void)deactivate;
-(void)activate;
-(void)updatesEnabled;
-(BOOL)forceStableResults;
-(void)setSession:(SPClientSession *)arg1 ;
-(void)updatesDisabled;
-(BOOL)queryInProgress;
-(BOOL)infinitePatience;
-(NSString *)rankingDebugLog;
-(long long)maxUISuggestions;
-(void)_setInfinitePatience:(BOOL)arg1 ;
-(void)setMaxUISuggestions:(long long)arg1 ;
@end

