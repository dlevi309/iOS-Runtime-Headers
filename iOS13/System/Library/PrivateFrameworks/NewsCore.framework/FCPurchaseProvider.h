/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPurchaseProviderType.h>

@class FCPurchaseController, FCPrivateChannelMembershipController, NSString, NSSet;

@interface FCPurchaseProvider : NSObject <FCPurchaseProviderType> {

	FCPurchaseController* _purchaseController;
	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) FCPurchaseController * purchaseController;                                              //@synthesize purchaseController=_purchaseController - In the implementation block
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
-(id)init;
-(FCPurchaseController *)purchaseController;
-(NSSet *)purchasedTagIDs;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(id)initWithPurchaseController:(id)arg1 privateChannelMembershipController:(id)arg2 ;
@end

