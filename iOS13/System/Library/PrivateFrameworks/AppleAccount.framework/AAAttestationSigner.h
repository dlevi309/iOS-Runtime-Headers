/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@protocol OS_dispatch_queue;
#import <AppleAccount/AppleAccount-Structs.h>
@class NSObject;

@interface AAAttestationSigner : NSObject {

	NSObject*<OS_dispatch_queue> _attestationQueue;

}
+(id)sharedSigner;
-(id)init;
-(id)_signatureForData:(id)arg1 withReferenceKey:(SecKeyRef)arg2 error:(id*)arg3 ;
-(id)_attestationWithCertificates:(id)arg1 error:(id*)arg2 ;
-(void)signatureForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signaturesForDatas:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

