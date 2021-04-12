/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)emailAddresses;
-(id)accountName;
-(void)setEmailAddresses:(id)arg1 ;
-(void)setAccountName:(id)arg1 ;
-(BOOL)isUnderage;
-(unsigned long long)loginStatus;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(BOOL)isPurpleBuddyAccount;
-(BOOL)isDefaultNickname;
-(BOOL)isLocalPlayer;
-(unsigned short)numberOfRequests;
-(id)minimalInternal;
-(unsigned short)numberOfChallenges;
-(unsigned short)numberOfTurns;
-(int)defaultFamiliarity;
-(void)setLoginStatus:(unsigned long long)arg1 ;
-(BOOL)isFriend;
-(BOOL)isFindable;
-(BOOL)isPhotoPending;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setDefaultNickname:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(void)setFindable:(BOOL)arg1 ;
-(void)setPhotoPending:(BOOL)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
@end

