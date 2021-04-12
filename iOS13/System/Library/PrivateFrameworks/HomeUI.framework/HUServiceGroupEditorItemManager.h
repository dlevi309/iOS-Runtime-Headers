/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFServiceGroupBuilder, HFStaticItem, HFItem;

@interface HUServiceGroupEditorItemManager : HFItemManager {

	HFServiceGroupBuilder* _serviceGroupBuilder;
	unsigned long long _mode;
	HFStaticItem* _nameAndIconItem;
	HFItem* _instructionsItem;
	HFStaticItem* _serviceGridItem;

}

@property (nonatomic,retain) HFStaticItem * nameAndIconItem;                             //@synthesize nameAndIconItem=_nameAndIconItem - In the implementation block
@property (nonatomic,retain) HFItem * instructionsItem;                                  //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * serviceGridItem;                             //@synthesize serviceGridItem=_serviceGridItem - In the implementation block
@property (nonatomic,readonly) HFServiceGroupBuilder * serviceGroupBuilder;              //@synthesize serviceGroupBuilder=_serviceGroupBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) long long instructionsSectionIndex; 
@property (nonatomic,readonly) long long serviceGridSectionIndex; 
-(unsigned long long)mode;
-(unsigned long long)_numberOfSections;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(HFStaticItem *)nameAndIconItem;
-(id)initWithServiceGroupBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3 ;
-(HFServiceGroupBuilder *)serviceGroupBuilder;
-(HFItem *)instructionsItem;
-(HFStaticItem *)serviceGridItem;
-(long long)instructionsSectionIndex;
-(long long)serviceGridSectionIndex;
-(id)currentSectionIdentifiers;
-(void)setNameAndIconItem:(HFStaticItem *)arg1 ;
-(void)setInstructionsItem:(HFItem *)arg1 ;
-(void)setServiceGridItem:(HFStaticItem *)arg1 ;
@end

