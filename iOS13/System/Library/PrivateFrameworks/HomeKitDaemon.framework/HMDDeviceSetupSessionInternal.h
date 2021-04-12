/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSData, NSDictionary;

@interface HMDDeviceSetupSessionInternal : HMFObject {

	unsigned long long _state;
	HMDHomeManager* _homeManager;
	NSData* _sessionData;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSData * sessionData;                     //@synthesize sessionData=_sessionData - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
+(long long)role;
+(id)allowedClasses;
+(BOOL)isSupported;
-(NSDictionary *)userInfo;
-(unsigned long long)state;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(NSData *)sessionData;
-(void)setSessionData:(NSData *)arg1 ;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(BOOL)processSessionData:(id)arg1 error:(id*)arg2 ;
@end

