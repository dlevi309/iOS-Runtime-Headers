/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPurchaseProviderType.h>

@class FCPurchaseController, FCPrivateChannelMembershipController, NSSet, NSString;

@interface FCPurchaseProvider : NSObject <FCPurchaseProviderType> {

	FCPurchaseController* _purchaseController;
	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) FCPurchaseController * purchaseController;                                              //@synthesize purchaseController=_purchaseController - In the implementation block
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithPurchaseController:(id)arg1 privateChannelMembershipController:(id)arg2 ;
-(FCPurchaseController *)purchaseController;
-(NSSet *)purchasedTagIDs;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
@end

