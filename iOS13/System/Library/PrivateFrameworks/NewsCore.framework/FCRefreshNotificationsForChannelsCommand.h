/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSArray, NSString;

@interface FCRefreshNotificationsForChannelsCommand : FCCommand {

	NSArray* _channelIDs;
	NSArray* _paidChannelIDs;
	NSString* _userID;
	NSString* _deviceToken;
	NSString* _storefrontID;

}

@property (nonatomic,copy) NSArray * channelIDs;                  //@synthesize channelIDs=_channelIDs - In the implementation block
@property (nonatomic,copy) NSArray * paidChannelIDs;              //@synthesize paidChannelIDs=_paidChannelIDs - In the implementation block
@property (nonatomic,copy) NSString * userID;                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;                //@synthesize deviceToken=_deviceToken - In the implementation block
@property (nonatomic,copy) NSString * storefrontID;               //@synthesize storefrontID=_storefrontID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(NSArray *)channelIDs;
-(NSString *)storefrontID;
-(id)initWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 ;
-(NSArray *)paidChannelIDs;
-(NSString *)deviceToken;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)setChannelIDs:(NSArray *)arg1 ;
-(void)setPaidChannelIDs:(NSArray *)arg1 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
@end

