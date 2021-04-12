/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDevice:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)sendEvent:(id)arg1 options:(id)arg2 ;
-(id)eventResponseHandler;
-(void)setEventResponseHandler:(id)arg1 ;
@end

