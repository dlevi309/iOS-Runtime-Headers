/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor : CBAttribute {

	CBCharacteristic* _characteristic;
	id _value;
	CBPeripheral* _peripheral;
	NSNumber* _handle;

}

@property (assign,nonatomic) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (retain) id value;                                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                    //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                            //@synthesize handle=_handle - In the implementation block
-(id)description;
-(void)invalidate;
-(NSNumber *)handle;
-(id)value;
-(void)setValue:(id)arg1 ;
-(CBPeripheral *)peripheral;
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
-(CBCharacteristic *)characteristic;
@end

