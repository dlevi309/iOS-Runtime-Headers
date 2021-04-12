/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
*/

#import <ShazamInsights/SQQuery.h>

@interface SQPoolQuery : SQQuery
+(id)poolsFromServerData:(id)arg1 error:(id*)arg2 ;
-(void)fetchPoolsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cachePoolForRegion:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchClustersWithPoolID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deletePool:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

