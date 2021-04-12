/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSURL, CKDeviceToDeviceShareInvitationToken, NSString, HMHome, HMUser;

@interface HMUserCloudShareInvitation : NSObject {

	NSURL* _shareURL;
	CKDeviceToDeviceShareInvitationToken* _shareToken;
	NSString* _containerID;
	HMHome* _home;
	HMUser* _user;
	HMUser* _fromUser;

}

@property (readonly) NSURL * shareURL;                                               //@synthesize shareURL=_shareURL - In the implementation block
@property (readonly) CKDeviceToDeviceShareInvitationToken * shareToken;              //@synthesize shareToken=_shareToken - In the implementation block
@property (readonly) NSString * containerID;                                         //@synthesize containerID=_containerID - In the implementation block
@property (readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (readonly) HMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (readonly) HMUser * fromUser;                                              //@synthesize fromUser=_fromUser - In the implementation block
-(HMUser *)user;
-(HMHome *)home;
-(NSString *)containerID;
-(NSURL *)shareURL;
-(id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6 ;
-(CKDeviceToDeviceShareInvitationToken *)shareToken;
-(HMUser *)fromUser;
@end

