/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class HMDAccessoryNetworkProtectionGroup;

@interface HMDAccessoryNetworkProtectionGroupRecord : NSObject {

	BOOL _active;
	BOOL _persisted;
	HMDAccessoryNetworkProtectionGroup* _group;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                     //@synthesize active=_active - In the implementation block
@property (assign,getter=isPersisted,nonatomic) BOOL persisted;               //@synthesize persisted=_persisted - In the implementation block
@property (readonly) HMDAccessoryNetworkProtectionGroup * group;              //@synthesize group=_group - In the implementation block
+(id)recordWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(HMDAccessoryNetworkProtectionGroup *)group;
-(void)setPersisted:(BOOL)arg1 ;
-(id)initWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3 ;
-(BOOL)isPersisted;
@end

