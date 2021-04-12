/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SPUISearchModel.h>

@protocol OS_dispatch_queue;
@class NSObject, SPZKWSession;

@interface SPUISearchModelZKW : SPUISearchModel {

	NSObject*<OS_dispatch_queue> _queryProcessor;
	BOOL _shouldCacheResults;
	BOOL _newQuery;
	SPZKWSession* _session;

}

@property (nonatomic,retain) SPZKWSession * session;              //@synthesize session=_session - In the implementation block
-(id)init;
-(void)dealloc;
-(SPZKWSession *)session;
-(void)setSession:(SPZKWSession *)arg1 ;
-(void)updateAtUIPriorityWithQueryContext:(id)arg1 ;
-(void)updateWithQueryContext:(id)arg1 ;
-(void)updateWithQueryContext:(id)arg1 uiPriority:(BOOL)arg2 ;
@end

