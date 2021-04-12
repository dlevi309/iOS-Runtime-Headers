/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

