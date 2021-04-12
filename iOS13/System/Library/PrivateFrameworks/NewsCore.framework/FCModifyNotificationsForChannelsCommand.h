/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSArray, NSString;

@interface FCModifyNotificationsForChannelsCommand : FCCommand {

	NSArray* _channelIDsToAdd;
	NSArray* _paidChannelIDsToAdd;
	NSArray* _channelIDsToRemove;
	NSString* _userID;
	NSString* _deviceToken;
	NSString* _storefrontID;

}

@property (nonatomic,copy) NSArray * channelIDsToAdd;                  //@synthesize channelIDsToAdd=_channelIDsToAdd - In the implementation block
@property (nonatomic,copy) NSArray * paidChannelIDsToAdd;              //@synthesize paidChannelIDsToAdd=_paidChannelIDsToAdd - In the implementation block
@property (nonatomic,copy) NSArray * channelIDsToRemove;               //@synthesize channelIDsToRemove=_channelIDsToRemove - In the implementation block
@property (nonatomic,copy) NSString * userID;                          //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;                     //@synthesize deviceToken=_deviceToken - In the implementation block
@property (nonatomic,copy) NSString * storefrontID;                    //@synthesize storefrontID=_storefrontID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(NSString *)storefrontID;
-(NSString *)deviceToken;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
-(id)initWithChannelIDsToAdd:(id)arg1 paidChannelIDsToAdd:(id)arg2 channelIDsToRemove:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6 ;
-(NSArray *)channelIDsToAdd;
-(NSArray *)paidChannelIDsToAdd;
-(NSArray *)channelIDsToRemove;
-(void)setChannelIDsToAdd:(NSArray *)arg1 ;
-(void)setPaidChannelIDsToAdd:(NSArray *)arg1 ;
-(void)setChannelIDsToRemove:(NSArray *)arg1 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
@end

