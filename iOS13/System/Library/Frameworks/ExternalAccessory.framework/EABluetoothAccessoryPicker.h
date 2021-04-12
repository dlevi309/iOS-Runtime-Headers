/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/

#import <libobjc.A.dylib/BTDevicePickerDelegate.h>

@protocol EABluetoothAccessoryPickerDelegate;
@class BTDevicePicker, NSString;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate> {

	BTDevicePicker* _picker;
	id<EABluetoothAccessoryPickerDelegate> _delegate;

}

@property (assign,nonatomic) id<EABluetoothAccessoryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wakeSelectedBluetoothAccessories:(id)arg1 ;
-(void)dealloc;
-(id<EABluetoothAccessoryPickerDelegate>)delegate;
-(void)setDelegate:(id<EABluetoothAccessoryPickerDelegate>)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(void)show;
-(void)devicePicker:(id)arg1 didDismissWithResult:(long long)arg2 device:(id)arg3 ;
-(void)dismissPicker;
@end

