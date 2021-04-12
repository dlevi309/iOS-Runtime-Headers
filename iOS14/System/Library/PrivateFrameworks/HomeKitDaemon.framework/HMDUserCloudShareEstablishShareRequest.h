/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUserCloudShareRequest.h>

@class HMDUser, NSData;

@interface HMDUserCloudShareEstablishShareRequest : HMDUserCloudShareRequest {

	HMDUser* _fromUser;
	HMDUser* _toUser;
	NSData* _encodedShareURL;
	NSData* _shareToken;
	/*^block*/id _completion;

}

@property (__weak,readonly) HMDUser * fromUser;              //@synthesize fromUser=_fromUser - In the implementation block
@property (__weak,readonly) HMDUser * toUser;                //@synthesize toUser=_toUser - In the implementation block
@property (readonly) NSData * encodedShareURL;               //@synthesize encodedShareURL=_encodedShareURL - In the implementation block
@property (readonly) NSData * shareToken;                    //@synthesize shareToken=_shareToken - In the implementation block
@property (copy,readonly) id completion;                     //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(HMDUser *)toUser;
-(id)description;
-(HMDUser *)fromUser;
-(NSData *)shareToken;
-(id)initWithHome:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 encodedShareURL:(id)arg4 shareToken:(id)arg5 containerID:(id)arg6 currentDate:(id)arg7 completion:(/*^block*/id)arg8 ;
-(NSData *)encodedShareURL;
@end

