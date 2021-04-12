/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, AKAppleIDAuthenticationContext;

@interface AKAccountRecoveryContext : NSObject <NSSecureCoding> {

	BOOL _supportsMasterKeyRecovery;
	NSString* _encodedRecoveryIdentityToken;
	NSString* _encodedRecoveryPET;
	NSURL* _recoveryContinuationURL;
	AKAppleIDAuthenticationContext* _authContext;

}

@property (assign,nonatomic) BOOL supportsMasterKeyRecovery;                               //@synthesize supportsMasterKeyRecovery=_supportsMasterKeyRecovery - In the implementation block
@property (nonatomic,copy) NSString * encodedRecoveryIdentityToken;                        //@synthesize encodedRecoveryIdentityToken=_encodedRecoveryIdentityToken - In the implementation block
@property (nonatomic,copy) NSString * encodedRecoveryPET;                                  //@synthesize encodedRecoveryPET=_encodedRecoveryPET - In the implementation block
@property (nonatomic,copy) NSURL * recoveryContinuationURL;                                //@synthesize recoveryContinuationURL=_recoveryContinuationURL - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authContext;                 //@synthesize authContext=_authContext - In the implementation block
@property (nonatomic,readonly) NSString * decodedRecoveryIdentityTokenString; 
@property (nonatomic,readonly) NSString * decodedRecoveryPETString; 
+(BOOL)supportsSecureCoding;
+(id)recoveryContextWithServerInfo:(id)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKAppleIDAuthenticationContext *)authContext;
-(NSString *)decodedRecoveryPETString;
-(BOOL)supportsMasterKeyRecovery;
-(NSURL *)recoveryContinuationURL;
-(NSString *)decodedRecoveryIdentityTokenString;
-(void)setAuthContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(void)setSupportsMasterKeyRecovery:(BOOL)arg1 ;
-(void)setEncodedRecoveryIdentityToken:(NSString *)arg1 ;
-(void)setEncodedRecoveryPET:(NSString *)arg1 ;
-(void)setRecoveryContinuationURL:(NSURL *)arg1 ;
-(NSString *)encodedRecoveryIdentityToken;
-(NSString *)encodedRecoveryPET;
@end

