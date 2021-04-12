/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@interface SHError : NSObject
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(BOOL)annotateClientError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3 ;
+(BOOL)annotateClientError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3 keyOverrides:(id)arg4 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3 ;
+(id)messageForCode:(long long)arg1 ;
+(id)recoverySuggestionForCode:(long long)arg1 ;
@end

