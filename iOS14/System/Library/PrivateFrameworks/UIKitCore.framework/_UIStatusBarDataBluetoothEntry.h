/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_ui_descriptionBuilder;
-(_UIStatusBarDataBatteryEntry *)batteryEntry;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBatteryEntry:(_UIStatusBarDataBatteryEntry *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

