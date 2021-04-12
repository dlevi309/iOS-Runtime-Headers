/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class NSSet, HFStaticItem, HMHome, HFItemProvider;

@interface HUFaceRecognitionUserPhotosLibrarySettingsModule : HFItemModule {

	BOOL _shouldUseProxCardPresentationStyle;
	NSSet* _itemProviders;
	HFStaticItem* _photoLibraryAccessNever;
	HMHome* _home;
	HFItemProvider* _allowPhotosLibraryAccessItemProvider;
	HFStaticItem* _photoLibraryAccessOnlyMe;
	HFStaticItem* _photoLibraryAccessEveryoneInThisHome;

}

@property (nonatomic,retain) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HFItemProvider * allowPhotosLibraryAccessItemProvider;              //@synthesize allowPhotosLibraryAccessItemProvider=_allowPhotosLibraryAccessItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItem * photoLibraryAccessNever;                             //@synthesize photoLibraryAccessNever=_photoLibraryAccessNever - In the implementation block
@property (nonatomic,retain) HFStaticItem * photoLibraryAccessOnlyMe;                            //@synthesize photoLibraryAccessOnlyMe=_photoLibraryAccessOnlyMe - In the implementation block
@property (nonatomic,retain) HFStaticItem * photoLibraryAccessEveryoneInThisHome;                //@synthesize photoLibraryAccessEveryoneInThisHome=_photoLibraryAccessEveryoneInThisHome - In the implementation block
@property (assign,nonatomic) BOOL shouldUseProxCardPresentationStyle;                            //@synthesize shouldUseProxCardPresentationStyle=_shouldUseProxCardPresentationStyle - In the implementation block
-(id)didSelectItem:(id)arg1 ;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(HFItemProvider *)allowPhotosLibraryAccessItemProvider;
-(HFStaticItem *)photoLibraryAccessNever;
-(id)_updatePhotosLibrarySettingsForItem:(id)arg1 ;
-(void)setPhotoLibraryAccessNever:(HFStaticItem *)arg1 ;
-(void)setPhotoLibraryAccessOnlyMe:(HFStaticItem *)arg1 ;
-(void)setPhotoLibraryAccessEveryoneInThisHome:(HFStaticItem *)arg1 ;
-(HFStaticItem *)photoLibraryAccessOnlyMe;
-(HFStaticItem *)photoLibraryAccessEveryoneInThisHome;
-(void)setAllowPhotosLibraryAccessItemProvider:(HFItemProvider *)arg1 ;
-(BOOL)shouldUseProxCardPresentationStyle;
-(void)setShouldUseProxCardPresentationStyle:(BOOL)arg1 ;
@end

