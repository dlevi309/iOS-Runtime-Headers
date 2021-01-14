/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <CFNetwork/NSURLAuthenticationChallenge.h>
#import <AVFCore/AVAssetResourceLoaderRequest.h>

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
-(void)_performCancellationByClient;
-(unsigned long long)_requestID;
-(id)init;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestInfo:(CFDictionaryRef)arg3 requestID:(unsigned long long)arg4 ;
-(id)_weakReference;
-(CFDictionaryRef)_requestInfo;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(BOOL)_shouldInformDelegateOfFigCancellation;
-(void)dealloc;
@end

