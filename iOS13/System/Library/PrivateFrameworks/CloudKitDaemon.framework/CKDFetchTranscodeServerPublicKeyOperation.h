/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDOperation.h>

@class CKPublicKey, NSString, NSURL;

@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation {

	CKPublicKey* _transcodeServerPublicKey;
	NSString* _transcodeServerHostname;
	NSURL* _transcodeServerPublicKeyURL;

}

@property (nonatomic,readonly) NSString * transcodeServerHostname;              //@synthesize transcodeServerHostname=_transcodeServerHostname - In the implementation block
@property (nonatomic,retain) NSURL * transcodeServerPublicKeyURL;               //@synthesize transcodeServerPublicKeyURL=_transcodeServerPublicKeyURL - In the implementation block
@property (retain) CKPublicKey * transcodeServerPublicKey;                      //@synthesize transcodeServerPublicKey=_transcodeServerPublicKey - In the implementation block
+(SecPolicyRef)createTranscodeServerTrustPolicy;
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(NSString *)transcodeServerHostname;
-(void)setTranscodeServerPublicKeyURL:(NSURL *)arg1 ;
-(NSURL *)transcodeServerPublicKeyURL;
-(void)setTranscodeServerPublicKey:(CKPublicKey *)arg1 ;
-(void)determineTranscodeServerPublicKeyURL;
-(void)fetchCachedTranscodePublicKey;
-(CKPublicKey *)transcodeServerPublicKey;
-(void)fetchRemoteTranscodePublicKey;
@end

