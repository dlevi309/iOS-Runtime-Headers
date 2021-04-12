/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(AMSAuthenticateOptions *)options;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setOptions:(AMSAuthenticateOptions *)arg1 ;
-(id)description;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)initWithDSID:(id)arg1 altDSID:(id)arg2 username:(id)arg3 options:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)logKey;
@end

