/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class CBUUID;

@interface CBAttribute : NSObject {

	CBUUID* _UUID;

}

@property (nonatomic,readonly) CBUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(CBUUID *)UUID;
-(id)initWithUUID:(id)arg1 ;
@end

