/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)propertyListRepresentation;
-(NSString *)deviceGUID;
-(void)setDeviceGUID:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
@end

