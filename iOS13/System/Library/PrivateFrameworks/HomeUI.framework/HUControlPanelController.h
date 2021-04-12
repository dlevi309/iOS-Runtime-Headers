/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUControlViewDelegate.h>

@protocol HUControlPanelControllerDelegate;
@class NSMutableSet, NSSet, NSMutableDictionary, NSString;

@interface HUControlPanelController : NSObject <HUControlViewDelegate> {

	NSMutableSet* _allItems;
	id<HUControlPanelControllerDelegate> _delegate;
	NSSet* _configurations;
	NSMutableDictionary* _interactionStateByControlID;

}

@property (nonatomic,readonly) NSSet * configurations;                                            //@synthesize configurations=_configurations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * interactionStateByControlID;                 //@synthesize interactionStateByControlID=_interactionStateByControlID - In the implementation block
@property (nonatomic,__weak,readonly) id<HUControlPanelControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * allItems;                                                  //@synthesize allItems=_allItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUControlPanelControllerDelegate>)delegate;
-(void)removeItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(NSSet *)configurations;
-(NSSet *)allItems;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)controlView:(id)arg1 valueDidChange:(id)arg2 ;
-(void)controlViewDidBeginUserInteraction:(id)arg1 ;
-(void)controlViewDidEndUserInteraction:(id)arg1 ;
-(BOOL)shouldDisplayItem:(id)arg1 ;
-(BOOL)shouldShowSectionTitleForItem:(id)arg1 ;
-(id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2 ;
-(id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2 ;
-(BOOL)shouldShowSectionFooterForItem:(id)arg1 ;
-(id)_createConfigurations;
-(id)_createWriteThrottleForControlItem:(id)arg1 controlPanelItem:(id)arg2 ;
-(NSMutableDictionary *)interactionStateByControlID;
-(id)_configurationForItem:(id)arg1 ;
-(void)_updateStateForControlView:(id)arg1 controlPanelItem:(id)arg2 ;
-(id)_valueTransformerForControlItem:(id)arg1 controlPanelItem:(id)arg2 ;
-(id)_controlPanelItemForControlView:(id)arg1 ;
-(void)_updateWriteStateForControlItem:(id)arg1 controlPanelItem:(id)arg2 ;
-(void)_updateWriteStateForControlView:(id)arg1 ;
-(id)_controlItemForControlView:(id)arg1 ;
@end

