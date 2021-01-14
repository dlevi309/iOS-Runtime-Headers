/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class TVRCDevice;

@interface TVRCDeviceEventManager : NSObject {

	TVRCDevice* _device;
	/*^block*/id _eventResponseHandler;

}

@property (nonatomic,retain) TVRCDevice * device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) id eventResponseHandler;              //@synthesize eventResponseHandler=_eventResponseHandler - In the implementation block
-(TVRCDevice *)device;
-(void)setDevice:(TVRCDevice *)arg1 ;
-(id)eventResponseHandler;
-(id)initWithDevice:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)sendEvent:(id)arg1 options:(id)arg2 ;
-(void)setEventResponseHandler:(id)arg1 ;
@end

