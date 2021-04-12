/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
*/

#import <iTunesStoreUI/SUClientController.h>

@interface ASClientController : SUClientController {

	BOOL _shouldExitAfterPurchases;

}

@property (assign,nonatomic) BOOL shouldExitAfterPurchases;              //@synthesize shouldExitAfterPurchases=_shouldExitAfterPurchases - In the implementation block
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2 ;
-(id)initWithClientInterface:(id)arg1 ;
-(BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1 ;
-(BOOL)shouldExitAfterPurchases;
-(void)setShouldExitAfterPurchases:(BOOL)arg1 ;
@end

