/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentNonceResponse : PKPaymentWebServiceResponse {

	NSData* _nonceData;

}

@property (nonatomic,copy) NSData * nonceData;              //@synthesize nonceData=_nonceData - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)nonceData;
-(void)setNonceData:(NSData *)arg1 ;
@end

