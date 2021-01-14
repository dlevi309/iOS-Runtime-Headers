/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSDeviceMessengerFilter;

@interface AMSDeviceUpdateHandlerInfo : NSObject {

	AMSDeviceMessengerFilter* _filter;
	/*^block*/id _block;

}

@property (nonatomic,retain) AMSDeviceMessengerFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id block;                                         //@synthesize block=_block - In the implementation block
-(void)setFilter:(AMSDeviceMessengerFilter *)arg1 ;
-(id)block;
-(AMSDeviceMessengerFilter *)filter;
-(void)setBlock:(id)arg1 ;
@end

