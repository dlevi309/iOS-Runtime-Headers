/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFWiFiGasProxy.h>

@class NSString;

@interface WFGasQueryProxy : NSObject <WFWiFiGasProxy> {

	WiFiDeviceClientRef _device;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;              //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHandler:(id)arg1 ;
-(WiFiDeviceClientRef)device;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(id)handler;
-(void)gasQueryForRecords:(id)arg1 request:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_processGasResults:(id)arg1 error:(int)arg2 ;
@end

