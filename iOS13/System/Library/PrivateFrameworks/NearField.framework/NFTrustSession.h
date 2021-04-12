/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>

@interface NFTrustSession : NFSession
-(id)createKey:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(id)getKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteKey:(id)arg1 error:(id*)arg2 ;
-(id)signWithKey:(id)arg1 request:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(id)listKeys:(id*)arg1 ;
-(id)signWithKey:(id)arg1 request:(id)arg2 paymentRequest:(id)arg3 authorization:(id)arg4 error:(id*)arg5 ;
@end

