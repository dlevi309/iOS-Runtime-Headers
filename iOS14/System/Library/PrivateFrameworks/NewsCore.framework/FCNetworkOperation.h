/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@interface FCNetworkOperation : FCOperation

@property (nonatomic,readonly) double preferredTimeoutIntervalForRequest; 
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(unsigned long long)maxRetries;
-(BOOL)_canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(double)preferredTimeoutIntervalForRequest;
-(BOOL)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2 ;
@end

