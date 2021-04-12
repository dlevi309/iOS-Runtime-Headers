/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
*/


@protocol NDNewsService <NSObject>
@required
-(void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)fetchModuleDescriptorsWithCompletion:(/*^block*/id)arg1;
-(void)fetchLatestResultsWithParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchPlaceholderResultsWithOperationInfo:(id)arg1 syncCompletion:(/*^block*/id)arg2;
-(void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

