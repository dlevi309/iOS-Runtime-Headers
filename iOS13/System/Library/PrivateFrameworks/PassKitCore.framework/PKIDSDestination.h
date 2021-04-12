/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PKIDSDestination : NSObject {

	NSString* _deviceIdentifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(NSString *)deviceIdentifier;
-(id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
@end

