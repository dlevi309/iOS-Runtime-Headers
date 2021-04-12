/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HMBProcessingModelResult.h>

@class HMBModel;

@interface HMBProcessingModelUpdate : HMBProcessingModelResult {

	HMBModel* _previousModel;

}

@property (readonly) HMBModel * previousModel;              //@synthesize previousModel=_previousModel - In the implementation block
-(id)attributeDescriptions;
-(id)initWithModel:(id)arg1 previousModel:(id)arg2 options:(id)arg3 mirrorOutputFuture:(id)arg4 ;
-(HMBModel *)previousModel;
@end

