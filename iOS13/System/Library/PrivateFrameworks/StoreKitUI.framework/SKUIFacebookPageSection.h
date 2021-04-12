/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class ACAccountStore, SKUIReviewsFacebookView, SKUIViewElementLayoutContext, SKUIFacebookLikeStatus, SKUIFacebookPageComponent;

@interface SKUIFacebookPageSection : SKUIStorePageSection {

	ACAccountStore* _accountStore;
	char _facebookAccountsExist;
	SKUIReviewsFacebookView* _facebookView;
	BOOL _isLoadingLikeStatus;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIFacebookLikeStatus* _likeStatus;

}

@property (nonatomic,readonly) SKUIFacebookPageComponent * pageComponent; 
-(void)dealloc;
-(id)_accountStore;
-(void)_resetState;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(long long)applyUpdateType:(long long)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)_changeStatusToUserLiked:(BOOL)arg1 ;
-(id)_facebookView;
-(void)_applyColorSchemeToFacebookView:(id)arg1 ;
-(long long)_facebookAccountsExist;
-(void)_reloadLikeStatus;
-(void)_reloadCollectionViewSection;
-(void)_toggleLikeAction:(id)arg1 ;
-(void)_finishLookupWithStatus:(id)arg1 error:(id)arg2 ;
@end

