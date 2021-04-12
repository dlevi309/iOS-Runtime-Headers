/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSString;

@interface HMUserInviteInformation : NSObject {

	BOOL _administrator;
	BOOL _remoteAccessAllowed;
	NSString* _userID;
	unsigned long long _camerasAccessLevel;

}

@property (nonatomic,copy,readonly) NSString * userID;                                             //@synthesize userID=_userID - In the implementation block
@property (getter=isAdministrator,nonatomic,readonly) BOOL administrator;                          //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed,nonatomic,readonly) BOOL remoteAccessAllowed;              //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,readonly) unsigned long long camerasAccessLevel;                              //@synthesize camerasAccessLevel=_camerasAccessLevel - In the implementation block
-(id)init;
-(NSString *)userID;
-(BOOL)isAdministrator;
-(BOOL)isRemoteAccessAllowed;
-(unsigned long long)camerasAccessLevel;
-(id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3 camerasAccessLevel:(unsigned long long)arg4 ;
-(id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3 ;
@end

