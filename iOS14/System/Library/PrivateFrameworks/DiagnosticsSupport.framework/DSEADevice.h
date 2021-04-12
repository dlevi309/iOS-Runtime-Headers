/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@class EAAccessory;

@interface DSEADevice : NSObject {

	EAAccessory* _device;

}

@property (nonatomic,retain) EAAccessory * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithSerialNumber:(id)arg1 ;
+(id)deviceWithModelNumber:(id)arg1 ;
+(id)devicesWithModelNumbers:(id)arg1 ;
-(EAAccessory *)device;
-(void)setDevice:(EAAccessory *)arg1 ;
-(id)information;
-(id)initWithAccessory:(id)arg1 ;
-(id)initWithSerialNumber:(id)arg1 ;
-(id)initWithModelNumber:(id)arg1 ;
@end

