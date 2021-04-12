/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSString, AMSAuthenticateOptions, NSDictionary;

@interface AMSAuthenticateRequest : NSObject <NSSecureCoding> {

	ACAccount* _account;
	NSString* _logKey;
	AMSAuthenticateOptions* _options;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * logKey;                             //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) AMSAuthenticateOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(AMSAuthenticateOptions *)options;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setOptions:(AMSAuthenticateOptions *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithDSID:(id)arg1 altDSID:(id)arg2 username:(id)arg3 options:(id)arg4 ;
@end

