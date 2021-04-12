/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/DBSDisplayZoomTableViewCellDelegate.h>

@class NSString;

@interface DBSDisplayZoomSelectionListController : PSListController <DBSDisplayZoomTableViewCellDelegate> {

	unsigned long long _selectedDisplayZoomOption;

}

@property (assign,nonatomic) unsigned long long selectedDisplayZoomOption;              //@synthesize selectedDisplayZoomOption=_selectedDisplayZoomOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)displayZoomTableViewCellCurrentlySelectedDisplayZoomOption:(id)arg1 ;
-(void)displayZoomTableViewCell:(id)arg1 userDidTapOnDisplayZoomOption:(unsigned long long)arg2 ;
-(void)userDidTapSet:(id)arg1 ;
-(void)userDidTapCancel:(id)arg1 ;
-(void)_updateNavigationButtonStateWithNewOption:(unsigned long long)arg1 ;
-(void)setSelectedDisplayZoomOption:(unsigned long long)arg1 ;
-(void)_userDidConfirmDisplayZoomModeWithSpecifier:(id)arg1 ;
-(unsigned long long)selectedDisplayZoomOption;
@end

