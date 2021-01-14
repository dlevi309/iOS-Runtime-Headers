/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAugmentBaseResponse.h>

@class NSData;

@interface PKPaymentNonceResponse : PKPaymentAugmentBaseResponse {

	NSData* _nonceData;

}

@property (nonatomic,copy) NSData * nonceData;              //@synthesize nonceData=_nonceData - In the implementation block
-(NSData *)nonceData;
-(id)initWithData:(id)arg1 ;
-(void)setNonceData:(NSData *)arg1 ;
@end

