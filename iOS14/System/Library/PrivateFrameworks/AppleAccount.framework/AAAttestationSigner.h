/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)signaturesForDatas:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_signatureForData:(id)arg1 withReferenceKey:(SecKeyRef)arg2 error:(id*)arg3 ;
-(id)_attestationWithCertificates:(id)arg1 error:(id*)arg2 ;
-(void)signatureForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

