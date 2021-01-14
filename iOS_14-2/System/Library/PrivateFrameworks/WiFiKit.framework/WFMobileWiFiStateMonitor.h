/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


#import <WiFiKit/WiFiKit-Structs.h>
@class WFLinkQuality;

@interface WFMobileWiFiStateMonitor : NSObject {

	long long _state;
	/*^block*/id _handler;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	WFLinkQuality* _linkQuality;

}

@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef manager;              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) WFLinkQuality * linkQuality;               //@synthesize linkQuality=_linkQuality - In the implementation block
@property (copy) id handler;                                            //@synthesize handler=_handler - In the implementation block
-(void)stopMonitoring;
-(WFLinkQuality *)linkQuality;
-(void)setLinkQuality:(WFLinkQuality *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)startMonitoring;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(WiFiDeviceClientRef)device;
-(void)_updateState;
-(void)setState:(long long)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(WiFiManagerClientRef)manager;
-(long long)state;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(id)handler;
-(void)_updateWithDeviceAttachment:(WiFiDeviceClientRef)arg1 ;
-(void)dealloc;
@end

