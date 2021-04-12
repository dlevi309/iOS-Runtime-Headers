/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _DECPredictionCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)description;
-(void)cachePredictions:(id)arg1 consumer:(unsigned long long)arg2 ;
-(void)clearCacheForCategory:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(id)predictionsForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
@end

