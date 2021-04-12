/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@interface FCNetworkOperation : FCOperation

@property (nonatomic,readonly) double preferredTimeoutIntervalForRequest; 
-(unsigned long long)maxRetries;
-(BOOL)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2 ;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(BOOL)_canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(double)preferredTimeoutIntervalForRequest;
@end

