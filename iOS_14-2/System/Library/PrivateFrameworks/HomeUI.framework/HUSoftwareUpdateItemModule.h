/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HFSoftwareUpdatableItemProtocol;
@class NSSet, HMHome, HFItem, HUSoftwareUpdateActionAndProgressItem, HFStaticItem, HUSoftwareUpdateInfoItemProvider;

@interface HUSoftwareUpdateItemModule : HFItemModule {

	BOOL _unifyDownloadAndDescriptionSections;
	NSSet* _itemProviders;
	HMHome* _home;
	HFItem*<HFSoftwareUpdatableItemProtocol> _sourceItem;
	NSSet* _accessories;
	HUSoftwareUpdateActionAndProgressItem* _actionAndProgressItem;
	HFStaticItem* _learnMoreItem;
	HUSoftwareUpdateInfoItemProvider* _softwareUpdateInfoItemProvider;

}

@property (nonatomic,retain) HUSoftwareUpdateActionAndProgressItem * actionAndProgressItem;                  //@synthesize actionAndProgressItem=_actionAndProgressItem - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateInfoItemProvider * softwareUpdateInfoItemProvider;              //@synthesize softwareUpdateInfoItemProvider=_softwareUpdateInfoItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItem * learnMoreItem;                                                   //@synthesize learnMoreItem=_learnMoreItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFItem*<HFSoftwareUpdatableItemProtocol> sourceItem;                          //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,readonly) NSSet * accessories;                                                          //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic) BOOL unifyDownloadAndDescriptionSections;                                       //@synthesize unifyDownloadAndDescriptionSections=_unifyDownloadAndDescriptionSections - In the implementation block
-(void)_reloadItemProviders;
-(NSSet *)accessories;
-(id)itemProviders;
-(HFItem*<HFSoftwareUpdatableItemProtocol>)sourceItem;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMHome *)home;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 ;
-(void)setActionAndProgressItem:(HUSoftwareUpdateActionAndProgressItem *)arg1 ;
-(HUSoftwareUpdateActionAndProgressItem *)actionAndProgressItem;
-(void)setLearnMoreItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)learnMoreItem;
-(void)setSoftwareUpdateInfoItemProvider:(HUSoftwareUpdateInfoItemProvider *)arg1 ;
-(HUSoftwareUpdateInfoItemProvider *)softwareUpdateInfoItemProvider;
-(BOOL)unifyDownloadAndDescriptionSections;
-(void)setUnifyDownloadAndDescriptionSections:(BOOL)arg1 ;
@end

