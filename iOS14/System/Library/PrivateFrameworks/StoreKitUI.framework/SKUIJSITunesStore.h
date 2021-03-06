/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <ITMLKit/IKJSITunesStore.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <libobjc.A.dylib/SKUIJSITunesStore.h>
@class SKUIJSAppleAccount, SKUIJSRestrictions, NSString;


@protocol SKUIJSITunesStore <JSExport>
@property (assign,nonatomic) long long applicationIconBadgeNumber; 
@property (nonatomic,readonly) SKUIJSAppleAccount * primaryAppleAccount; 
@property (nonatomic,readonly) SKUIJSRestrictions * restrictions; 
@property (nonatomic,copy,readonly) NSString * hostApp; 
@property (nonatomic,readonly) BOOL isAppPreview; 
@required
-(void)buy:(id)arg1;
-(void)setApplicationIconBadgeNumber:(long long)arg1;
-(long long)applicationIconBadgeNumber;
-(void)exit:(id)arg1;
-(SKUIJSRestrictions *)restrictions;
-(NSString *)hostApp;
-(void)log:(id)arg1;
-(SKUIJSAppleAccount *)primaryAppleAccount;
-(void)getAdminStatus:(id)arg1 :(id)arg2;
-(void)approveInPerson:(id)arg1 :(id)arg2;
-(BOOL)areVideosCloudPurchasesEnabled;
-(void)attemptLocalAskToBuyApproval:(id)arg1;
-(void)download:(id)arg1;
-(void)downloadExistsFor:(id)arg1 :(id)arg2;
-(void)findApps:(id)arg1 :(id)arg2 :(id)arg3;
-(void)findLibraryItems:(id)arg1 :(id)arg2 :(id)arg3;
-(void)findOwnedItems:(id)arg1 :(id)arg2;
-(void)findToggleStateForItem:(id)arg1 :(id)arg2;
-(void)clearToggleStateItems;
-(void)getBookSample:(id)arg1;
-(void)getProfilePermissions:(id)arg1 :(id)arg2;
-(void)isInstalledApp:(id)arg1 :(id)arg2;
-(void)isRemovedSystemApp:(id)arg1 :(id)arg2;
-(void)launchICloudFamilySettings;
-(void)loadGratisContent:(id)arg1;
-(void)headsUp:(id)arg1 :(id)arg2;
-(void)resetStateForActiveDocument;
-(BOOL)resourceExists:(id)arg1;
-(void)setPreviewOverlay:(id)arg1 :(id)arg2;
-(void)restoreRemovedSystemApp:(id)arg1 :(id)arg2;
-(void)updateToggleStateForItem:(id)arg1 toggled:(BOOL)arg2 :(id)arg3;
-(void)loadRentals:(id)arg1;
-(void)loadRental:(id)arg1 :(id)arg2;
-(void)fetchTemplates:(id)arg1 :(id)arg2;
-(id)documentSizeForNavigationDocument:(id)arg1;
-(void)fetchMSOProviderStatus:(id)arg1;
-(BOOL)isAppPreview;

@end


@class SKUIJSAppleAccount, SKUIJSRestrictions, NSString, SKUIClientContext;

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIItemStateCenterObserver, SKUIJSITunesStore> {

	SKUIClientContext* _clientContext;
	BOOL _isAppPreview;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long applicationIconBadgeNumber; 
@property (nonatomic,readonly) SKUIJSAppleAccount * primaryAppleAccount; 
@property (nonatomic,readonly) SKUIJSRestrictions * restrictions; 
@property (nonatomic,copy,readonly) NSString * hostApp; 
@property (nonatomic,readonly) BOOL isAppPreview; 
-(void)buy:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(long long)arg1 ;
-(long long)applicationIconBadgeNumber;
-(void)exit:(id)arg1 ;
-(SKUIJSRestrictions *)restrictions;
-(NSString *)hostApp;
-(void)log:(id)arg1 ;
-(void)dealloc;
-(SKUIJSAppleAccount *)primaryAppleAccount;
-(void)itemStateCenterMediaLibrariesDidChange:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
-(void)_purchaseRequestDidSucceedNotification:(id)arg1 ;
-(void)_finishPurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2 ;
-(void)_finishSoftwarePurchaseForOptions:(id)arg1 purchaseResponse:(id)arg2 ;
-(id)_rentalInfoFromMediaItems:(id)arg1 ;
-(id)_millisecondsFromTimeInterval:(double)arg1 ;
-(void)getAdminStatus:(id)arg1 :(id)arg2 ;
-(void)approveInPerson:(id)arg1 :(id)arg2 ;
-(BOOL)areVideosCloudPurchasesEnabled;
-(void)attemptLocalAskToBuyApproval:(id)arg1 ;
-(void)download:(id)arg1 ;
-(void)downloadExistsFor:(id)arg1 :(id)arg2 ;
-(void)findApps:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)findLibraryItems:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)findOwnedItems:(id)arg1 :(id)arg2 ;
-(void)findToggleStateForItem:(id)arg1 :(id)arg2 ;
-(void)clearToggleStateItems;
-(void)getBookSample:(id)arg1 ;
-(void)getProfilePermissions:(id)arg1 :(id)arg2 ;
-(void)isInstalledApp:(id)arg1 :(id)arg2 ;
-(void)isRemovedSystemApp:(id)arg1 :(id)arg2 ;
-(void)launchICloudFamilySettings;
-(void)loadGratisContent:(id)arg1 ;
-(void)headsUp:(id)arg1 :(id)arg2 ;
-(void)resetStateForActiveDocument;
-(BOOL)resourceExists:(id)arg1 ;
-(void)setPreviewOverlay:(id)arg1 :(id)arg2 ;
-(void)restoreRemovedSystemApp:(id)arg1 :(id)arg2 ;
-(void)updateToggleStateForItem:(id)arg1 toggled:(BOOL)arg2 :(id)arg3 ;
-(void)loadRentals:(id)arg1 ;
-(void)loadRental:(id)arg1 :(id)arg2 ;
-(void)fetchTemplates:(id)arg1 :(id)arg2 ;
-(id)documentSizeForNavigationDocument:(id)arg1 ;
-(void)fetchMSOProviderStatus:(id)arg1 ;
-(BOOL)isAppPreview;
-(void)sendApplicationDidEnterBackground;
-(void)sendApplicationWillEnterForeground;
-(void)sendOnNavigationStackWillPop:(BOOL)arg1 ;
-(void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4 ;
-(BOOL)sendOnXEventWithDictionary:(id)arg1 ;
-(BOOL)sendAppPreviewStateChanged:(BOOL)arg1 ;
-(void)sendApplicationWindowSizeDidUpdate:(CGSize)arg1 ;
-(BOOL)sendOnShowPageEventType:(id)arg1 data:(id)arg2 ;
-(void)_displayWifiConnectionRequiredAlert;
@end

