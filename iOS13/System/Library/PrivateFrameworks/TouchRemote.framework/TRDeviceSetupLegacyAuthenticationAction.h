/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRDeviceSetupConnectAction.h>

@class NSString;

@interface TRDeviceSetupLegacyAuthenticationAction : TRDeviceSetupConnectAction {

	NSString* _deviceGUID;
	NSString* _userAgent;

}

@property (nonatomic,retain) NSString * deviceGUID;              //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,retain) NSString * userAgent;               //@synthesize userAgent=_userAgent - In the implementation block
-(id)deviceName;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(id)propertyListRepresentation;
-(NSString *)deviceGUID;
-(void)setDeviceGUID:(NSString *)arg1 ;
@end

