/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NRDevice;

@interface NRActiveDeviceAssertion : NSObject {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	NRDevice* _device;

}

@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,retain,readonly) NRDevice * device; 
-(BOOL)isActive;
-(NRDevice *)device;
-(id)description;
-(void)invalidate;
-(void)dealloc;
@end

