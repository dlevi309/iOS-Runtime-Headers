/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding> {

	long long _loginCancelledCount;
	NSString* _accountName;
	long long _serverEnvironment;

}

@property (assign,nonatomic) long long loginCancelledCount;              //@synthesize loginCancelledCount=_loginCancelledCount - In the implementation block
@property (nonatomic,retain) NSString * accountName;                     //@synthesize accountName=_accountName - In the implementation block
@property (assign,nonatomic) long long serverEnvironment;                //@synthesize serverEnvironment=_serverEnvironment - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)migratePreSundanceAccountInformation;
+(void)migratePreBlacktailAccountInformation;
+(id)authMachineForEnvironment:(long long)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLoginCancelledCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)serverEnvironment;
-(long long)loginCancelledCount;
-(void)dealloc;
-(void)setServerEnvironment:(long long)arg1 ;
@end

