/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDWHAAccessControlEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _isP2PEnabled;
	BOOL _isPasswordSet;
	int _privilegeLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isP2PEnabled;                     //@synthesize isP2PEnabled=_isP2PEnabled - In the implementation block
@property (assign,nonatomic) int privilegeLevel;                    //@synthesize privilegeLevel=_privilegeLevel - In the implementation block
@property (assign,nonatomic) BOOL isPasswordSet;                    //@synthesize isPasswordSet=_isPasswordSet - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventWithP2PEnabled:(BOOL)arg1 privilegeLevel:(long long)arg2 passwordSet:(BOOL)arg3 ;
+(int)awdUserPrivilegeFromHMUserPrivilege:(long long)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setIsP2PEnabled:(BOOL)arg1 ;
-(int)privilegeLevel;
-(void)setPrivilegeLevel:(int)arg1 ;
-(void)setIsPasswordSet:(BOOL)arg1 ;
-(BOOL)isP2PEnabled;
-(BOOL)isPasswordSet;
@end

