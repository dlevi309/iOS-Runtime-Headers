/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@class NSString, NSDictionary;

@interface TVRViewServiceConfigContext : NSObject {

	NSString* _deviceIdentifier;
	long long _deviceIdentifierType;
	long long _deviceType;
	long long _launchContext;
	/*^block*/id _presentationAnimations;
	/*^block*/id _dismissalAnimations;
	unsigned long long _dismissalType;
	NSString* _lastActiveEndpointIdentifier;

}

@property (assign,nonatomic) unsigned long long dismissalType;                   //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,copy) NSString * lastActiveEndpointIdentifier;              //@synthesize lastActiveEndpointIdentifier=_lastActiveEndpointIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) NSString * deviceIdentifier;                      //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) long long deviceIdentifierType;                   //@synthesize deviceIdentifierType=_deviceIdentifierType - In the implementation block
@property (nonatomic,readonly) long long deviceType;                             //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long launchContext;                          //@synthesize launchContext=_launchContext - In the implementation block
@property (nonatomic,copy) id presentationAnimations;                            //@synthesize presentationAnimations=_presentationAnimations - In the implementation block
@property (nonatomic,copy) id dismissalAnimations;                               //@synthesize dismissalAnimations=_dismissalAnimations - In the implementation block
-(id)init;
-(id)description;
-(NSDictionary *)userInfo;
-(long long)deviceType;
-(NSString *)deviceIdentifier;
-(void)_commonInit;
-(id)dismissalAnimations;
-(void)setDismissalAnimations:(id)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 identifierType:(long long)arg2 deviceType:(long long)arg3 launchContext:(long long)arg4 ;
-(long long)deviceIdentifierType;
-(long long)launchContext;
-(unsigned long long)dismissalType;
-(NSString *)lastActiveEndpointIdentifier;
-(id)_initWithLaunchContext:(long long)arg1 ;
-(id)_initWithUserInfo:(id)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 type:(long long)arg2 ;
-(id)presentationAnimations;
-(void)setPresentationAnimations:(id)arg1 ;
-(void)setDismissalType:(unsigned long long)arg1 ;
-(void)setLastActiveEndpointIdentifier:(NSString *)arg1 ;
@end

