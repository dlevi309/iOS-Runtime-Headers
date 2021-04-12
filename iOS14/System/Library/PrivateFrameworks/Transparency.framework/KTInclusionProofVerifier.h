/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class KTApplicationPublicKeyStore, NSString;

@interface KTInclusionProofVerifier : NSObject {

	KTApplicationPublicKeyStore* _keyStore;
	NSString* _application;

}

@property (readonly) KTApplicationPublicKeyStore * keyStore;              //@synthesize keyStore=_keyStore - In the implementation block
@property (retain) NSString * application;                                //@synthesize application=_application - In the implementation block
-(void)setApplication:(NSString *)arg1 ;
-(KTApplicationPublicKeyStore *)keyStore;
-(NSString *)application;
-(id)initWithKeyStore:(id)arg1 application:(id)arg2 ;
-(unsigned long long)verifyInclusionProofWithMapEntry:(id)arg1 perAppLogEntry:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id*)arg4 ;
-(void)setInclusionVerifiedForMapHead:(id)arg1 ;
-(unsigned long long)verifyPerApplicationTreeEntry:(id)arg1 mapHead:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id*)arg4 ;
@end

