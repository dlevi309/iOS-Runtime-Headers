/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSString;

@interface HMUserInviteInformation : NSObject {

	BOOL _administrator;
	BOOL _remoteAccessAllowed;
	BOOL _announceAccessAllowed;
	NSString* _userID;
	unsigned long long _camerasAccessLevel;

}

@property (nonatomic,copy,readonly) NSString * userID;                                                 //@synthesize userID=_userID - In the implementation block
@property (getter=isAdministrator,nonatomic,readonly) BOOL administrator;                              //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed,nonatomic,readonly) BOOL remoteAccessAllowed;                  //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,readonly) unsigned long long camerasAccessLevel;                                  //@synthesize camerasAccessLevel=_camerasAccessLevel - In the implementation block
@property (getter=isAnnounceAccessAllowed,nonatomic,readonly) BOOL announceAccessAllowed;              //@synthesize announceAccessAllowed=_announceAccessAllowed - In the implementation block
-(NSString *)userID;
-(id)init;
-(BOOL)isAdministrator;
-(id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3 announceAccess:(BOOL)arg4 camerasAccessLevel:(unsigned long long)arg5 ;
-(id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3 ;
-(BOOL)isRemoteAccessAllowed;
-(BOOL)isAnnounceAccessAllowed;
-(unsigned long long)camerasAccessLevel;
@end

