/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSUUID, NSDate, HMDHome, HMDUser, NSData, NSString;

@interface HMDUserCloudShareRequest : NSObject {

	NSUUID* _identifier;
	NSDate* _startDate;
	HMDHome* _home;
	HMDUser* _fromUser;
	HMDUser* _toUser;
	NSData* _encodedShareURL;
	NSData* _shareToken;
	NSString* _containerID;
	/*^block*/id _completion;

}

@property (readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (__weak,readonly) HMDHome * home;                  //@synthesize home=_home - In the implementation block
@property (__weak,readonly) HMDUser * fromUser;              //@synthesize fromUser=_fromUser - In the implementation block
@property (__weak,readonly) HMDUser * toUser;                //@synthesize toUser=_toUser - In the implementation block
@property (readonly) NSData * encodedShareURL;               //@synthesize encodedShareURL=_encodedShareURL - In the implementation block
@property (readonly) NSData * shareToken;                    //@synthesize shareToken=_shareToken - In the implementation block
@property (readonly) NSString * containerID;                 //@synthesize containerID=_containerID - In the implementation block
@property (copy,readonly) id completion;                     //@synthesize completion=_completion - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(NSDate *)startDate;
-(HMDHome *)home;
-(id)completion;
-(NSString *)containerID;
-(NSData *)shareToken;
-(HMDUser *)fromUser;
-(id)initWithHome:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 encodedShareURL:(id)arg4 shareToken:(id)arg5 containerID:(id)arg6 currentDate:(id)arg7 completion:(/*^block*/id)arg8 ;
-(HMDUser *)toUser;
-(NSData *)encodedShareURL;
@end

