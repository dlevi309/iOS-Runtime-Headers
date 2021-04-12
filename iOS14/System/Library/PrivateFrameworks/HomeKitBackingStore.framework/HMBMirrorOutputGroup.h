/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMBProcessingOptions *)options;
-(id)description;
-(unsigned long long)blockRow;
-(id)initWithBlockRow:(unsigned long long)arg1 options:(id)arg2 ;
@end

