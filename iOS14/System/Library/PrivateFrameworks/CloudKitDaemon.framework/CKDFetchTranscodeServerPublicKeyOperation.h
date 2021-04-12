/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,readonly) NSString * transcodeServerHostname;              //@synthesize transcodeServerHostname=_transcodeServerHostname - In the implementation block
@property (nonatomic,retain) NSURL * transcodeServerPublicKeyURL;               //@synthesize transcodeServerPublicKeyURL=_transcodeServerPublicKeyURL - In the implementation block
@property (retain) CKPublicKey * transcodeServerPublicKey;                      //@synthesize transcodeServerPublicKey=_transcodeServerPublicKey - In the implementation block
+(SecPolicyRef)createTranscodeServerTrustPolicy;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
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

