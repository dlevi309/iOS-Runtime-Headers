/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

