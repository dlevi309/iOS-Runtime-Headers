/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AKCredential>)credential;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCredential:(id<AKCredential>)arg1 ;
-(id)description;
-(id<AKCredentialRequestProtocol>)authorizedRequest;
-(void)setAuthorizedRequest:(id<AKCredentialRequestProtocol>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

