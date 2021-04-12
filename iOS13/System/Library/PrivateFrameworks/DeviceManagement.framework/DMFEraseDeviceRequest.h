/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFEraseDeviceRequest : DMFTaskRequest {

	BOOL _hideProximitySetupPane;
	unsigned long long _eraseDeviceType;
	unsigned long long _dataResetOptions;
	NSString* _pin;

}

@property (assign,nonatomic) unsigned long long eraseDeviceType;               //@synthesize eraseDeviceType=_eraseDeviceType - In the implementation block
@property (assign,nonatomic) unsigned long long dataResetOptions;              //@synthesize dataResetOptions=_dataResetOptions - In the implementation block
@property (nonatomic,copy) NSString * pin;                                     //@synthesize pin=_pin - In the implementation block
@property (assign,nonatomic) BOOL hideProximitySetupPane;                      //@synthesize hideProximitySetupPane=_hideProximitySetupPane - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPin:(NSString *)arg1 ;
-(NSString *)pin;
-(unsigned long long)eraseDeviceType;
-(unsigned long long)dataResetOptions;
-(BOOL)hideProximitySetupPane;
-(void)setEraseDeviceType:(unsigned long long)arg1 ;
-(void)setDataResetOptions:(unsigned long long)arg1 ;
-(void)setHideProximitySetupPane:(BOOL)arg1 ;
@end

