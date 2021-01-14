/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _DECPredictionCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)cachePredictions:(id)arg1 consumer:(unsigned long long)arg2 ;
-(id)description;
-(id)predictionsForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(void)clearCacheForCategory:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
@end

