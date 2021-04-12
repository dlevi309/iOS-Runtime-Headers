/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel;

@interface HMBLocalZoneReplicationItem : HMFObject {

	HMBModel* _updatedValue;
	HMBModel* _previousValue;

}

@property (nonatomic,readonly) HMBModel * updatedValue;               //@synthesize updatedValue=_updatedValue - In the implementation block
@property (nonatomic,readonly) HMBModel * previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
-(HMBModel *)previousValue;
-(HMBModel *)updatedValue;
@end

