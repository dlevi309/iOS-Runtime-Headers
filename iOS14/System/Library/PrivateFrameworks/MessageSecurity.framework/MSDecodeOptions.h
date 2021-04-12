/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/


#import <MessageSecurity/MessageSecurity-Structs.h>
@class NSArray, NSDate, NSData;

@interface MSDecodeOptions : NSObject {

	BOOL _verifySignatures;
	BOOL _verifySigners;
	NSArray* _signerPolicies;
	NSDate* _verifyTime;
	SecIdentityRef _identity;
	NSData* _key;
	NSData* _LAContext;

}

@property (assign) BOOL verifySignatures;                 //@synthesize verifySignatures=_verifySignatures - In the implementation block
@property (assign) BOOL verifySigners;                    //@synthesize verifySigners=_verifySigners - In the implementation block
@property (retain) NSArray * signerPolicies;              //@synthesize signerPolicies=_signerPolicies - In the implementation block
@property (retain) NSDate * verifyTime;                   //@synthesize verifyTime=_verifyTime - In the implementation block
@property (assign) SecIdentityRef identity;               //@synthesize identity=_identity - In the implementation block
@property (retain) NSData * key;                          //@synthesize key=_key - In the implementation block
@property (retain) NSData * LAContext;                    //@synthesize LAContext=_LAContext - In the implementation block
-(void)setIdentity:(SecIdentityRef)arg1 ;
-(id)init;
-(SecIdentityRef)identity;
-(NSData *)key;
-(NSData *)LAContext;
-(void)setLAContext:(NSData *)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(void)dealloc;
-(BOOL)verifySigners;
-(NSArray *)signerPolicies;
-(NSDate *)verifyTime;
-(BOOL)verifySignatures;
-(id)initWithDecryptionIdentity:(SecIdentityRef)arg1 ;
-(id)initWithDecryptionKey:(id)arg1 ;
-(void)setVerifySignatures:(BOOL)arg1 ;
-(void)setVerifySigners:(BOOL)arg1 ;
-(void)setSignerPolicies:(NSArray *)arg1 ;
-(void)setVerifyTime:(NSDate *)arg1 ;
@end

