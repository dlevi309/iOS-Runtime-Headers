/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKDevice *)device;
-(NSString *)name;
-(id)initWithSource:(id)arg1 device:(id)arg2 ;
-(HKSourceDataModel *)sourceModel;
@end

