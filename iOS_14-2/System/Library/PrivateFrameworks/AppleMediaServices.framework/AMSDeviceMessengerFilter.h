/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ACAccount *)account;
-(long long)messageType;
-(long long)deviceType;
-(void)setMessageType:(long long)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(BOOL)matchesMessage:(id)arg1 ;
@end

