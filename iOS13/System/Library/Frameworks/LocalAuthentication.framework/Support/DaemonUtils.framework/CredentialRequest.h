/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/

#import <DaemonUtils/Request.h>

@class LASecureData;

@interface CredentialRequest : Request {

	BOOL _readOnly;
	long long _credentialType;
	LASecureData* _credentialData;

}

@property (nonatomic,readonly) long long credentialType;                   //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) LASecureData * credentialData;              //@synthesize credentialData=_credentialData - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                              //@synthesize readOnly=_readOnly - In the implementation block
-(BOOL)readOnly;
-(long long)credentialType;
-(id)initWithCredential:(long long)arg1 value:(id)arg2 readOnly:(BOOL)arg3 ;
-(LASecureData *)credentialData;
@end

