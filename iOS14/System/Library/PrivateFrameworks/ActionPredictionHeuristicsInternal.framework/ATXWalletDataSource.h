/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice;

@interface ATXWalletDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)_getPassStyleMaskForString:(id)arg1 ;
-(void)passesWithStyle:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)_extractRelevantSemanticTagsFromPass:(id)arg1 ;
@end

