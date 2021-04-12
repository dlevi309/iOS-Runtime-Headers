/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

