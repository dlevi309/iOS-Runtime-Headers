/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class HKSourceDataModel, HKDevice, NSString;

@interface WDSource : NSObject {

	HKSourceDataModel* _sourceModel;
	HKDevice* _device;
	NSString* _name;

}

@property (nonatomic,readonly) HKSourceDataModel * sourceModel;              //@synthesize sourceModel=_sourceModel - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(HKDevice *)device;
-(HKSourceDataModel *)sourceModel;
-(id)initWithSource:(id)arg1 device:(id)arg2 ;
@end

