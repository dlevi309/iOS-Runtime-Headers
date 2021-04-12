/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@interface BioStreamsEventHelper : NSObject {

	BOOL _inBuddy;
	long long _deviceType;

}

@property (assign,nonatomic) long long deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL inBuddy;                      //@synthesize inBuddy=_inBuddy - In the implementation block
-(id)subtype;
-(long long)deviceType;
-(void)setDeviceType:(long long)arg1 ;
-(id)containerIdentifier;
-(BOOL)inBuddy;
-(void)setInBuddy:(BOOL)arg1 ;
-(id)initWithBKDeviceType:(long long)arg1 inBuddy:(BOOL)arg2 ;
-(void)sendSuccessfulEnrollEvent;
@end

