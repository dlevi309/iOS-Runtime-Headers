/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDaemon:(id<NDNewsService>)arg1 ;
-(void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<NDNewsService>)daemon;
-(id)init;
-(id)_queue;
-(void)serviceHasNewTodayResults;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchLatestResultsWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPlaceholderResultsWithOperationInfo:(id)arg1 syncCompletion:(/*^block*/id)arg2 ;
-(void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setUpdateResultsHandler:(id)arg1 ;
-(id)updateResultsHandler;
@end

