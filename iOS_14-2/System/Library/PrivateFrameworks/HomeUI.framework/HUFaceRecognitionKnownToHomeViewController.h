/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUFaceRecognitionPersonEditorViewControllerDelegate.h>

@class HFItemProvider, HFItemManager, NSString;

@interface HUFaceRecognitionKnownToHomeViewController : HUItemTableViewController <HUFaceRecognitionPersonEditorViewControllerDelegate> {

	HFItemProvider* _homePersonItemProvider;
	HFItemManager* _knownPersonItemManager;

}

@property (nonatomic,retain) HFItemProvider * homePersonItemProvider;              //@synthesize homePersonItemProvider=_homePersonItemProvider - In the implementation block
@property (nonatomic,retain) HFItemManager * knownPersonItemManager;               //@synthesize knownPersonItemManager=_knownPersonItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(BOOL)arg3 ;
-(void)setHomePersonItemProvider:(HFItemProvider *)arg1 ;
-(HFItemProvider *)homePersonItemProvider;
-(void)personEditorViewController:(id)arg1 didUpdateItem:(id)arg2 ;
-(HFItemManager *)knownPersonItemManager;
-(void)setKnownPersonItemManager:(HFItemManager *)arg1 ;
@end

