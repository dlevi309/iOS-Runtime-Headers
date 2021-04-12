/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@interface CPLTransaction : NSObject
+(id)transactions;
+(unsigned long long)transactionCount;
+(void)endTransactionWithReason:(id)arg1 ;
+(void)beginTransactionWithReason:(id)arg1 keepPower:(BOOL)arg2 ;
@end

