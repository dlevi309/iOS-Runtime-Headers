/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class KTApplicationPublicKeyStore, NSString;

@interface KTPatInclusionProofVerifier : NSObject {

	KTApplicationPublicKeyStore* _keyStore;
	NSString* _application;

}

@property (readonly) KTApplicationPublicKeyStore * keyStore;              //@synthesize keyStore=_keyStore - In the implementation block
@property (retain) NSString * application;                                //@synthesize application=_application - In the implementation block
-(void)setApplication:(NSString *)arg1 ;
-(KTApplicationPublicKeyStore *)keyStore;
-(NSString *)application;
-(id)initWithKeyStore:(id)arg1 application:(id)arg2 ;
-(unsigned long long)verifyPatInclusionProofWithPerAppLogEntry:(id)arg1 topLevelTreeEntry:(id)arg2 error:(id*)arg3 ;
@end

