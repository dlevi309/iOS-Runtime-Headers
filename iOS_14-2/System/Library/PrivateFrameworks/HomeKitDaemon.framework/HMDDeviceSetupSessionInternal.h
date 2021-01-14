/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)allowedClasses;
+(BOOL)isSupported;
+(long long)role;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setSessionData:(NSData *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(NSData *)sessionData;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(HMDHomeManager *)homeManager;
-(BOOL)processSessionData:(id)arg1 error:(id*)arg2 ;
@end

