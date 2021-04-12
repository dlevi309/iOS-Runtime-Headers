/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PKAccessPassProperties : NSObject {

	NSString* _pairedEntityIdentifier;
	NSString* _deviceIdentifier;

}

@property (nonatomic,readonly) NSString * pairedEntityIdentifier;              //@synthesize pairedEntityIdentifier=_pairedEntityIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(id)propertiesFromPass:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(id)initWithPass:(id)arg1 ;
-(NSString *)pairedEntityIdentifier;
@end

