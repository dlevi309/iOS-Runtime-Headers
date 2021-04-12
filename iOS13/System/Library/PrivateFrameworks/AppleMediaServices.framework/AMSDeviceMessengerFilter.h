/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class ACAccount;

@interface AMSDeviceMessengerFilter : NSObject {

	ACAccount* _account;
	long long _deviceType;
	long long _messageType;

}

@property (assign,nonatomic) long long messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) ACAccount * account;                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long deviceType;               //@synthesize deviceType=_deviceType - In the implementation block
-(long long)deviceType;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(long long)messageType;
-(void)setMessageType:(long long)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(BOOL)matchesMessage:(id)arg1 ;
@end

