/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, HMBProcessingOptions, NAFuture;

@interface HMBProcessingModelResult : HMFObject {

	HMBModel* _model;
	HMBProcessingOptions* _options;
	NAFuture* _mirrorOutputFuture;

}

@property (readonly) HMBModel * model;                            //@synthesize model=_model - In the implementation block
@property (readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NAFuture * mirrorOutputFuture;               //@synthesize mirrorOutputFuture=_mirrorOutputFuture - In the implementation block
+(id)alloc;
-(HMBProcessingOptions *)options;
-(HMBModel *)model;
-(id)attributeDescriptions;
-(id)initWithModel:(id)arg1 options:(id)arg2 mirrorOutputFuture:(id)arg3 ;
-(NAFuture *)mirrorOutputFuture;
@end

