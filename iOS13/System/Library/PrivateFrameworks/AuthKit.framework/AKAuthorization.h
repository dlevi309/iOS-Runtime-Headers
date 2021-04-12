/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AKCredentialRequestProtocol, AKCredential;
@interface AKAuthorization : NSObject <NSSecureCoding> {

	id<AKCredentialRequestProtocol> _authorizedRequest;
	id<AKCredential> _credential;

}

@property (nonatomic,retain) id<AKCredentialRequestProtocol> authorizedRequest;              //@synthesize authorizedRequest=_authorizedRequest - In the implementation block
@property (nonatomic,retain) id<AKCredential> credential;                                    //@synthesize credential=_credential - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<AKCredential>)credential;
-(void)setCredential:(id<AKCredential>)arg1 ;
-(id<AKCredentialRequestProtocol>)authorizedRequest;
-(void)setAuthorizedRequest:(id<AKCredentialRequestProtocol>)arg1 ;
@end

