/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

