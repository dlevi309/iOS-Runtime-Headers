/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentityProperties, NSString, ACAccount, ACAccountStore, ICUserIdentityStore;

@interface ICUserVerificationContext : NSObject <NSCopying> {

	long long _interactionLevel;
	ICUserIdentityProperties* _identityProperties;
	NSString* _debugReason;
	ACAccount* _ACAccount;
	ACAccountStore* _ACAccountStore;
	ICUserIdentityStore* _identityStore;
	long long _verificationStyle;

}

@property (nonatomic,retain) ACAccount * ACAccount;                                    //@synthesize ACAccount=_ACAccount - In the implementation block
@property (nonatomic,retain) ACAccountStore * ACAccountStore;                          //@synthesize ACAccountStore=_ACAccountStore - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;              //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,retain) ICUserIdentityStore * identityStore;                      //@synthesize identityStore=_identityStore - In the implementation block
@property (assign,nonatomic) long long verificationStyle;                              //@synthesize verificationStyle=_verificationStyle - In the implementation block
@property (assign,nonatomic) long long interactionLevel;                               //@synthesize interactionLevel=_interactionLevel - In the implementation block
@property (nonatomic,copy) NSString * debugReason;                                     //@synthesize debugReason=_debugReason - In the implementation block
+(id)contextWithACAccount:(id)arg1 accountStore:(id)arg2 ;
-(ICUserIdentityStore *)identityStore;
-(long long)interactionLevel;
-(void)setACAccount:(ACAccount *)arg1 ;
-(ACAccount *)ACAccount;
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(void)setIdentityStore:(ICUserIdentityStore *)arg1 ;
-(ICUserIdentityProperties *)identityProperties;
-(void)setDebugReason:(NSString *)arg1 ;
-(NSString *)debugReason;
-(void)setVerificationStyle:(long long)arg1 ;
-(ACAccountStore *)ACAccountStore;
-(long long)verificationStyle;
-(void)setACAccountStore:(ACAccountStore *)arg1 ;
-(void)setInteractionLevel:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

