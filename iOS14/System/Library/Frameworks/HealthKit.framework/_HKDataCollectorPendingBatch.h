/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completion;
-(HKDevice *)device;
-(id)description;
-(NSArray *)data;
-(NSUUID *)batchUUID;
-(NSDictionary *)metadata;
-(id)initWithIdentifier:(id)arg1 data:(id)arg2 metadata:(id)arg3 device:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

