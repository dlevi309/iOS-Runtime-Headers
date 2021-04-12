/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@interface CPLErrors : NSObject
+(id)unsafeResources:(id)arg1 withError:(id)arg2 resourceStorage:(id)arg3 ;
+(id)operationCancelledError;
+(id)invalidDaemonErrorWithConnectionError:(id)arg1 ;
+(id)libraryClosedError;
+(id)unknownError;
+(id)errorsForIdentifiers:(id)arg1 error:(id)arg2 ;
+(id)cplErrorWithCode:(long long)arg1 description:(id)arg2 ;
+(id)incorrectParametersErrorForParameter:(id)arg1 ;
+(id)incorrectMachineStateErrorWithReason:(id)arg1 ;
+(id)underlyingErrorWithReason:(id)arg1 ;
+(id)versionMismatchError;
+(id)notImplementedError;
+(id)invalidScopeErrorWithScopedIdentifier:(id)arg1 ;
+(id)invalidScopeErrorWithScopeIdentifier:(id)arg1 ;
+(id)invalidScopeErrorWithScopeIndex:(long long)arg1 ;
+(id)unknownPrimaryScope;
+(id)readOnlyError;
+(id)transportErrorFromTransportError:(id)arg1 ;
+(id)invalidClientCacheErrorWithReason:(id)arg1 ;
+(id)invalidCloudCacheErrorWithReason:(id)arg1 ;
+(id)posixErrorForURL:(id)arg1 ;
+(id)cplErrorWithCode:(long long)arg1 description:(id)arg2 arguments:(char*)arg3 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 arguments:(char*)arg4 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(char*)arg5 ;
+(id)missingError;
+(id)sessionHasBeenDeferredError;
+(id)unsafeResources:(id)arg1 withError:(id)arg2 realPrune:(BOOL)arg3 resourceStorage:(id)arg4 ;
@end

