/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)containerID;
-(NSURL *)shareURL;
-(HMUser *)fromUser;
-(HMUser *)user;
-(id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6 ;
-(CKDeviceToDeviceShareInvitationToken *)shareToken;
-(HMHome *)home;
@end

