/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_dispatch_queue;
#import <AuthKit/AuthKit-Structs.h>
@class NSObject;

@interface AKAttestationSigner : NSObject {

	NSObject*<OS_dispatch_queue> _attestationQueue;

}
+(id)sharedSigner;
-(id)init;
-(id)_signatureForData:(id)arg1 withReferenceKey:(SecKeyRef)arg2 error:(id*)arg3 ;
-(id)_attestationWithCertificates:(id)arg1 error:(id*)arg2 ;
-(void)signatureForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signaturesForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

