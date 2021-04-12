/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateWithQueryContext:(id)arg1 ;
-(SPZKWSession *)session;
-(void)setSession:(SPZKWSession *)arg1 ;
-(void)dealloc;
@end

