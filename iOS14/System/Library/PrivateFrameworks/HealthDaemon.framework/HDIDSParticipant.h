/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class IDSDevice, NSString;

@interface HDIDSParticipant : NSObject {

	IDSDevice* _device;
	NSString* _destinationIdentifier;
	NSString* _deviceIdentifier;

}

@property (nonatomic,readonly) IDSDevice * device;                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationIdentifier;              //@synthesize destinationIdentifier=_destinationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(id)init;
-(IDSDevice *)device;
-(id)description;
-(NSString *)destinationIdentifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

