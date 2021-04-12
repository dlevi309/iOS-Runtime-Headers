/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCRegisterDeviceTokenCommand : FCCommand {

	NSString* _userID;
	NSString* _deviceToken;
	NSString* _storefrontID;

}

@property (nonatomic,copy) NSString * userID;                    //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;               //@synthesize deviceToken=_deviceToken - In the implementation block
@property (nonatomic,copy) NSString * storefrontID;              //@synthesize storefrontID=_storefrontID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserID:(NSString *)arg1 ;
-(NSString *)userID;
-(NSString *)storefrontID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(NSString *)deviceToken;
-(id)initWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 ;
-(void)setStorefrontID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceToken:(NSString *)arg1 ;
@end

