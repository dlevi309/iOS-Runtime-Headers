/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@class EAAccessory;

@interface DSEADevice : NSObject {

	EAAccessory* _device;

}

@property (nonatomic,retain) EAAccessory * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithSerialNumber:(id)arg1 ;
+(id)deviceWithModelNumber:(id)arg1 ;
-(EAAccessory *)device;
-(void)setDevice:(EAAccessory *)arg1 ;
-(id)information;
-(id)initWithSerialNumber:(id)arg1 ;
-(id)initWithModelNumber:(id)arg1 ;
@end

