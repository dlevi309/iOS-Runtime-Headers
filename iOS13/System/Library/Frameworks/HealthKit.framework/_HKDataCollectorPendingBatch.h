/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSUUID, NSArray, NSDictionary, HKDevice;

@interface _HKDataCollectorPendingBatch : NSObject {

	NSUUID* _batchUUID;
	NSArray* _data;
	NSDictionary* _metadata;
	HKDevice* _device;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSUUID * batchUUID;                   //@synthesize batchUUID=_batchUUID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) HKDevice * device;                    //@synthesize device=_device - In the implementation block
@property (nonatomic,copy,readonly) id completion;                        //@synthesize completion=_completion - In the implementation block
-(id)init;
-(id)description;
-(NSArray *)data;
-(HKDevice *)device;
-(NSDictionary *)metadata;
-(id)completion;
-(id)initWithData:(id)arg1 metadata:(id)arg2 device:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSUUID *)batchUUID;
@end

