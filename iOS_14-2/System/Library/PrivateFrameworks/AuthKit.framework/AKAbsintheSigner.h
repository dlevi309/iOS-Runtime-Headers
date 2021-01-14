/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


#import <AuthKit/AuthKit-Structs.h>
@class NSDate;

@interface AKAbsintheSigner : NSObject {

	NACContextOpaque_Ref _context;
	NSDate* _contextCreationDate;

}
+(id)sharedSigner;
-(void)signatureForURLRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_generateSignatureForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createSigningContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_didSigningContextExpire;
-(void)_destroySigningContext;
-(id)_sessionInfoFromCertificateData:(id)arg1 ;
-(void)_establishSessionWithInfo:(id)arg1 sessionURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)signatureForURLRequest:(id)arg1 ;
-(void)dealloc;
@end

