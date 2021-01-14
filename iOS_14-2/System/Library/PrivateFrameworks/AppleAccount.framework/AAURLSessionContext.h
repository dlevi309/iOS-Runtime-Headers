/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSURLSessionAppleIDContext.h>

@protocol OS_dispatch_queue;
@class AKAppleIDSession, NSObject, AAAbsintheSigner, AAAttestationSigner, AARemoteServer, NSString;

@interface AAURLSessionContext : NSObject <NSCoding, NSCopying, NSSecureCoding, NSURLSessionAppleIDContext> {

	AKAppleIDSession* _appleIDSession;
	os_unfair_lock_s _signerLock;
	NSObject*<OS_dispatch_queue> _signingQueue;
	BOOL _requiresSigning;
	AAAbsintheSigner* _absintheSigner;
	AAAttestationSigner* _attestationSigner;
	AARemoteServer* _remoteServer;

}

@property (nonatomic,retain) AAAbsintheSigner * absintheSigner;                    //@synthesize absintheSigner=_absintheSigner - In the implementation block
@property (nonatomic,retain) AAAttestationSigner * attestationSigner;              //@synthesize attestationSigner=_attestationSigner - In the implementation block
@property (nonatomic,retain) AARemoteServer * remoteServer;                        //@synthesize remoteServer=_remoteServer - In the implementation block
@property (nonatomic,readonly) BOOL requiresSigning;                               //@synthesize requiresSigning=_requiresSigning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_relevantHTTPStatusCodes;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)relevantHTTPStatusCodes;
-(AARemoteServer *)remoteServer;
-(void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setRemoteServer:(AARemoteServer *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)requiresSigning;
-(id)initRequiringSigning:(BOOL)arg1 ;
-(id)_initRequiringSigning:(BOOL)arg1 appleIDSession:(id)arg2 ;
-(void)_additionalAbsintheHeadersForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_additionalAttestationHeadersForData:(id)arg1 withValidity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(AAAbsintheSigner *)absintheSigner;
-(AAAttestationSigner *)attestationSigner;
-(void)_additionalHeadersForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAbsintheSigner:(AAAbsintheSigner *)arg1 ;
-(void)setAttestationSigner:(AAAttestationSigner *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

