/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)deviceIdentifier;
-(NSString *)name;
-(id)description;
-(id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2 ;
@end

