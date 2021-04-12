/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(long long)serverEnvironment;
-(void)setLoginCancelledCount:(long long)arg1 ;
-(long long)loginCancelledCount;
-(void)setServerEnvironment:(long long)arg1 ;
@end

