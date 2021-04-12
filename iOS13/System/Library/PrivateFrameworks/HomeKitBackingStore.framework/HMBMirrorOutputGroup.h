/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions;

@interface HMBMirrorOutputGroup : HMFObject {

	HMBProcessingOptions* _options;
	unsigned long long _blockRow;

}

@property (nonatomic,readonly) unsigned long long blockRow;                 //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
-(id)description;
-(HMBProcessingOptions *)options;
-(unsigned long long)blockRow;
-(id)initWithBlockRow:(unsigned long long)arg1 options:(id)arg2 ;
@end

