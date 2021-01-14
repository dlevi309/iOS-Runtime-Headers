/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>

@interface NFTrustSession : NFSession
-(id)getKey:(id)arg1 error:(id*)arg2 ;
-(id)createKey:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteKey:(id)arg1 error:(id*)arg2 ;
-(id)signWithKey:(id)arg1 request:(id)arg2 authorization:(id)arg3 error:(id*)arg4 ;
-(id)listKeys:(id*)arg1 ;
-(id)signWithKey:(id)arg1 request:(id)arg2 paymentRequest:(id)arg3 authorization:(id)arg4 error:(id*)arg5 ;
@end

