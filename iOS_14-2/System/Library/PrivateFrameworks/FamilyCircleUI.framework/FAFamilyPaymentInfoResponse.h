/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAResponse.h>

@class FAFamilyCreditCard;

@interface FAFamilyPaymentInfoResponse : AAResponse {

	FAFamilyCreditCard* _creditCard;

}

@property (nonatomic,retain) FAFamilyCreditCard * creditCard;              //@synthesize creditCard=_creditCard - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(FAFamilyCreditCard *)creditCard;
-(void)setCreditCard:(FAFamilyCreditCard *)arg1 ;
@end

