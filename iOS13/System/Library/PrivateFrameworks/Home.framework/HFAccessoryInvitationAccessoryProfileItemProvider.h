/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFAccessoryProfileItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationAccessoryProfileItemProvider : HFAccessoryProfileItemProvider {

	HMUser* _user;

}

@property (nonatomic,readonly) HMUser * user;              //@synthesize user=_user - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMUser *)user;
-(id)initWithHome:(id)arg1 ;
-(id)invalidationReasons;
-(id)initWithHome:(id)arg1 user:(id)arg2 ;
@end

