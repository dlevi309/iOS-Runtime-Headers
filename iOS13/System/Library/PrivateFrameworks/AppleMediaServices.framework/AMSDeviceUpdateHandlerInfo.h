/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSDeviceMessengerFilter;

@interface AMSDeviceUpdateHandlerInfo : NSObject {

	AMSDeviceMessengerFilter* _filter;
	/*^block*/id _block;

}

@property (nonatomic,retain) AMSDeviceMessengerFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id block;                                         //@synthesize block=_block - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setFilter:(AMSDeviceMessengerFilter *)arg1 ;
-(AMSDeviceMessengerFilter *)filter;
@end

