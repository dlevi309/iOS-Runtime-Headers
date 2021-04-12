/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class _UIStatusBarDataBatteryEntry;

@interface _UIStatusBarDataBluetoothEntry : _UIStatusBarDataEntry {

	long long _state;
	_UIStatusBarDataBatteryEntry* _batteryEntry;

}

@property (assign,nonatomic) long long state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) _UIStatusBarDataBatteryEntry * batteryEntry;              //@synthesize batteryEntry=_batteryEntry - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)_ui_descriptionBuilder;
-(_UIStatusBarDataBatteryEntry *)batteryEntry;
-(void)setBatteryEntry:(_UIStatusBarDataBatteryEntry *)arg1 ;
@end

