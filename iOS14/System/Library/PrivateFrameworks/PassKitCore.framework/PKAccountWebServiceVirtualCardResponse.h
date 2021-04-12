/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKVirtualCard;

@interface PKAccountWebServiceVirtualCardResponse : PKAccountWebServiceResponse {

	PKVirtualCard* _virtualCard;

}

@property (nonatomic,copy,readonly) PKVirtualCard * virtualCard;              //@synthesize virtualCard=_virtualCard - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKVirtualCard *)virtualCard;
@end

