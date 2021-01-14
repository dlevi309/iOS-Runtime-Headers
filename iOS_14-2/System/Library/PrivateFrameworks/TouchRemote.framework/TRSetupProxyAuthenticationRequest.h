/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, NSString, NSSet;

@interface TRSetupProxyAuthenticationRequest : TRRequestMessage {

	ACAccount* _account;
	NSString* _rawPassword;
	NSSet* _targetedAccountServices;

}

@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * rawPassword;                       //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,retain) NSSet * targetedAccountServices;              //@synthesize targetedAccountServices=_targetedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setRawPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)rawPassword;
-(NSSet *)targetedAccountServices;
-(void)setTargetedAccountServices:(NSSet *)arg1 ;
@end

