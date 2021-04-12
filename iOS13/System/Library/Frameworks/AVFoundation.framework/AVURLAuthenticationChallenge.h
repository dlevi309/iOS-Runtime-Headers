/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CFNetwork/NSURLAuthenticationChallenge.h>
#import <AVFoundation/AVAssetResourceLoaderRequest.h>

@class AVWeakReference, NSString;

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {

	AVWeakReference* _weakReference;
	unsigned long long _requestID;
	CFDictionaryRef _requestInfo;

}

@property (nonatomic,readonly) unsigned long long _requestID; 
@property (nonatomic,readonly) CFDictionaryRef _requestInfo;               //@synthesize requestInfo=_requestInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(id)init;
-(void)dealloc;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(unsigned long long)_requestID;
-(id)_weakReference;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestInfo:(CFDictionaryRef)arg3 requestID:(unsigned long long)arg4 ;
-(CFDictionaryRef)_requestInfo;
-(void)_performCancellationByClient;
-(BOOL)_shouldInformDelegateOfFigCancellation;
@end

