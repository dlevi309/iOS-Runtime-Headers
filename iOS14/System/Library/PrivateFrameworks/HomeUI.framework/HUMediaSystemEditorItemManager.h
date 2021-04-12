/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFMediaSystemBuilder, HFStaticItem, HFItem;

@interface HUMediaSystemEditorItemManager : HFItemManager {

	HFMediaSystemBuilder* _mediaSystemBuilder;
	unsigned long long _mode;
	HFStaticItem* _nameAndIconItem;
	HFItem* _instructionsItem;
	HFStaticItem* _serviceGridItem;

}

@property (nonatomic,retain) HFItem * instructionsItem;                                //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * serviceGridItem;                           //@synthesize serviceGridItem=_serviceGridItem - In the implementation block
@property (nonatomic,readonly) HFMediaSystemBuilder * mediaSystemBuilder;              //@synthesize mediaSystemBuilder=_mediaSystemBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) HFStaticItem * nameAndIconItem;                         //@synthesize nameAndIconItem=_nameAndIconItem - In the implementation block
@property (nonatomic,readonly) long long instructionsSectionIndex; 
@property (nonatomic,readonly) long long serviceGridSectionIndex; 
-(unsigned long long)mode;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(HFStaticItem *)nameAndIconItem;
-(unsigned long long)_numberOfSections;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFItem *)instructionsItem;
-(HFStaticItem *)serviceGridItem;
-(long long)instructionsSectionIndex;
-(long long)serviceGridSectionIndex;
-(HFMediaSystemBuilder *)mediaSystemBuilder;
-(id)currentSectionIdentifiers;
-(void)setInstructionsItem:(HFItem *)arg1 ;
-(void)setServiceGridItem:(HFStaticItem *)arg1 ;
-(id)initWithMediaSystemBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
@end

