/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest {

	BOOL _force;
	NSString* _destinationName;
	NSString* _destinationDeviceID;
	NSString* _password;
	double _scanWaitInterval;

}

@property (nonatomic,copy) NSString * destinationName;                  //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) NSString * destinationDeviceID;              //@synthesize destinationDeviceID=_destinationDeviceID - In the implementation block
@property (nonatomic,copy) NSString * password;                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL force;                                //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double scanWaitInterval;                   //@synthesize scanWaitInterval=_scanWaitInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(BOOL)force;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)destinationDeviceID;
-(double)scanWaitInterval;
-(void)setDestinationDeviceID:(NSString *)arg1 ;
-(void)setScanWaitInterval:(double)arg1 ;
-(void)setForce:(BOOL)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
@end

