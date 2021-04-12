/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SPUISearchModel.h>

@protocol OS_dispatch_queue;
@class SPClientSession, NSObject;

@interface SPUISearchModelGeneral : SPUISearchModel {

	SPClientSession* _session;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (retain) SPClientSession * session;                           //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
-(id)init;
-(void)clear;
-(SPClientSession *)session;
-(void)setSession:(SPClientSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)deactivate;
-(BOOL)infinitePatience;
-(void)setInfinitePatience:(BOOL)arg1 ;
-(BOOL)forceStableResults;
-(void)setForceStableResults:(BOOL)arg1 ;
-(void)updatesEnabled;
-(BOOL)queryInProgress;
-(void)updateWithQueryContext:(id)arg1 ;
-(void)updatesDisabled;
@end

