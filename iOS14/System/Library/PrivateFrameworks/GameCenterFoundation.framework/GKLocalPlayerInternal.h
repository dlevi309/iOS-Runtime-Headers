/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {

	NSString* _accountName;
	NSArray* _emailAddresses;
	NSString* _facebookUserID;
	NSNumber* _iCloudUserID;
	unsigned short _numberOfRequests;
	unsigned short _numberOfTurns;
	unsigned short _numberOfChallenges;
	unsigned long long _loginStatus;

}

@property (assign) unsigned long long loginStatus;              //@synthesize loginStatus=_loginStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(unsigned long long)loginStatus;
-(void)setAccountName:(id)arg1 ;
-(id)accountName;
-(BOOL)isDefaultNickname;
-(void)setEmailAddresses:(id)arg1 ;
-(id)emailAddresses;
-(BOOL)isLocalPlayer;
-(BOOL)isDefaultPrivacyVisibility;
-(BOOL)isUnderage;
-(BOOL)isPurpleBuddyAccount;
-(BOOL)isFriend;
-(void)dealloc;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(id)minimalInternal;
-(void)setDefaultNickname:(BOOL)arg1 ;
-(void)setDefaultPrivacyVisibility:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(unsigned short)numberOfTurns;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfChallenges;
-(int)defaultFamiliarity;
-(void)setLoginStatus:(unsigned long long)arg1 ;
-(BOOL)isFindable;
-(BOOL)isPhotoPending;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setFindable:(BOOL)arg1 ;
-(void)setPhotoPending:(BOOL)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
@end

