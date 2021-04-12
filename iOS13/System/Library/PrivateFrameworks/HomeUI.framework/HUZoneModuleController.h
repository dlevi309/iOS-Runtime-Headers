/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableModuleController.h>
#import <UIKit/UITextFieldDelegate.h>

@class HMRoom, HUTitleValueCell, HUEditableTextCell, HFZoneModule, NSString;

@interface HUZoneModuleController : HUItemTableModuleController <UITextFieldDelegate> {

	HMRoom* _room;
	HUTitleValueCell* _currentZoneItemCell;
	HUEditableTextCell* _createNewZoneCell;

}

@property (nonatomic,retain) HMRoom * room;                                              //@synthesize room=_room - In the implementation block
@property (assign,nonatomic,__weak) HUTitleValueCell * currentZoneItemCell;              //@synthesize currentZoneItemCell=_currentZoneItemCell - In the implementation block
@property (assign,nonatomic,__weak) HUEditableTextCell * createNewZoneCell;              //@synthesize createNewZoneCell=_createNewZoneCell - In the implementation block
@property (nonatomic,readonly) HFZoneModule * module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(HMRoom *)room;
-(BOOL)canSelectItem:(id)arg1 ;
-(void)setRoom:(HMRoom *)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)accessoryButtonTappedForItem:(id)arg1 ;
-(void)_configureCurrentZonesItem:(id)arg1 forCell:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureZoneBuilderItem:(id)arg1 forCell:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureZoneItem:(id)arg1 forCell:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureCreateNewZoneItem:(id)arg1 forCell:(id)arg2 animated:(BOOL)arg3 ;
-(id)_didSelectZoneItem:(id)arg1 ;
-(id)_didSelectZoneBuilderItem:(id)arg1 ;
-(HUEditableTextCell *)createNewZoneCell;
-(void)setCreateNewZoneCell:(HUEditableTextCell *)arg1 ;
-(void)_updateCreateNewZoneCellText:(BOOL)arg1 ;
-(void)setCurrentZoneItemCell:(HUTitleValueCell *)arg1 ;
-(BOOL)_validateNewZoneName:(id)arg1 ;
-(id)_createNewZoneWithName:(id)arg1 ;
-(id)initWithModule:(id)arg1 room:(id)arg2 ;
-(id)finishZoneNameEditing;
-(HUTitleValueCell *)currentZoneItemCell;
@end

