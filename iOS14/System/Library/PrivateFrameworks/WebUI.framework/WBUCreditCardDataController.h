/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/

#import <SafariShared/WBSCreditCardDataController.h>

@interface WBUCreditCardDataController : WBSCreditCardDataController
+(id)sharedCreditCardDataController;
-(BOOL)_shouldOfferVirtualCards;
-(unsigned long long)virtualCardFieldsToRequest;
-(BOOL)hasUsedNonVirtualCard;
-(void)setHasUsedNonVirtualCard;
@end

