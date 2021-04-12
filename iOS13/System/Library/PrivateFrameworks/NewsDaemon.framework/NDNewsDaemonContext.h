/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
*/

#import <libobjc.A.dylib/NDNewsServiceClient.h>
#import <libobjc.A.dylib/NDNewsService.h>

@protocol NDNewsService;
@class NSString;

@interface NDNewsDaemonContext : NSObject <NDNewsServiceClient, NDNewsService> {

	/*^block*/id _updateResultsHandler;
	id<NDNewsService> _daemon;

}

@property (nonatomic,retain) id<NDNewsService> daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) id updateResultsHandler;                 //@synthesize updateResultsHandler=_updateResultsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_queue;
-(id<NDNewsService>)daemon;
-(void)setDaemon:(id<NDNewsService>)arg1 ;
-(id)updateResultsHandler;
-(void)fetchLatestResultsWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)serviceHasNewTodayResults;
-(void)setUpdateResultsHandler:(id)arg1 ;
@end

