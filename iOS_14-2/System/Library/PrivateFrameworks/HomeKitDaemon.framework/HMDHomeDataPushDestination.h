/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSString, HMDUser;

@interface HMDHomeDataPushDestination : NSObject {

	BOOL _ignoreConfigCompare;
	NSString* _username;
	HMDUser* _user;
	NSString* _destination;

}

@property (nonatomic,readonly) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                          //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSString * pushDestination; 
@property (assign,nonatomic) BOOL ignoreConfigCompare;                  //@synthesize ignoreConfigCompare=_ignoreConfigCompare - In the implementation block
-(NSString *)username;
-(id)description;
-(HMDUser *)user;
-(NSString *)destination;
-(BOOL)ignoreConfigCompare;
-(id)initWithUser:(id)arg1 destination:(id)arg2 ;
-(NSString *)pushDestination;
-(void)setIgnoreConfigCompare:(BOOL)arg1 ;
@end

