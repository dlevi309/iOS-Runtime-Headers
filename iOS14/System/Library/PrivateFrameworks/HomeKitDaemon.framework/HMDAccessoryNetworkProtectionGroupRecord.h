/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMDAccessoryNetworkProtectionGroup *)group;
-(void)setPersisted:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(BOOL)isPersisted;
-(id)initWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3 ;
@end

