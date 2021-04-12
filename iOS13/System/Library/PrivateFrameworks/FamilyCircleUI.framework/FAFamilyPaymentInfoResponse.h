/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

