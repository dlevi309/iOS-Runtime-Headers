/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@protocol _DKKnowledgeQuerying;
@class ATXHeuristicDevice;

@interface ATXAppLaunchCountDataSource : NSObject {

	ATXHeuristicDevice* _device;
	id<_DKKnowledgeQuerying> _duetStore;

}
-(id)initWithDevice:(id)arg1 ;
-(void)appLaunchCountForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 limit:(unsigned long long)arg4 callback:(/*^block*/id)arg5 ;
@end

