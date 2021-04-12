/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NRDevice;

@interface NRActiveDeviceAssertion : NSObject {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	NRDevice* _device;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NRDevice * device;                               //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
-(void)dealloc;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(NRDevice *)device;
-(void)setDevice:(NRDevice *)arg1 ;
-(id)initWithDevice:(id)arg1 identifier:(id)arg2 ;
@end

