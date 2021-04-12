/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class KTApplicationPublicKeyStore, NSString;

@interface KTPatConfigInclusionProofVerifier : NSObject {

	KTApplicationPublicKeyStore* _keyStore;
	NSString* _application;

}

@property (readonly) KTApplicationPublicKeyStore * keyStore;              //@synthesize keyStore=_keyStore - In the implementation block
@property (retain) NSString * application;                                //@synthesize application=_application - In the implementation block
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(KTApplicationPublicKeyStore *)keyStore;
-(id)initWithKeyStore:(id)arg1 application:(id)arg2 ;
-(BOOL)verifyPatConfigInclusionProofWithPerAppLogEntry:(id)arg1 topLevelTreeEntry:(id)arg2 error:(id*)arg3 ;
@end

