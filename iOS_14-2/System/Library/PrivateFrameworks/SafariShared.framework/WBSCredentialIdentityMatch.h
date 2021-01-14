/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSFormAutoFillItem.h>

@class SFPasswordCredentialIdentity, NSExtension, SFSafariCredential;

@interface WBSCredentialIdentityMatch : WBSFormAutoFillItem {

	SFPasswordCredentialIdentity* _credentialIdentity;
	NSExtension* _extension;
	SFSafariCredential* _resolvedCredential;

}

@property (nonatomic,readonly) SFPasswordCredentialIdentity * credentialIdentity;              //@synthesize credentialIdentity=_credentialIdentity - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) SFSafariCredential * resolvedCredential;                        //@synthesize resolvedCredential=_resolvedCredential - In the implementation block
-(id)initWithCredentialIdentity:(id)arg1 extension:(id)arg2 ;
-(id)resolvedMatchWithCredential:(id)arg1 ;
-(SFPasswordCredentialIdentity *)credentialIdentity;
-(SFSafariCredential *)resolvedCredential;
-(id)completion;
-(NSExtension *)extension;
@end

