/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@class NSArray, NSMutableIndexSet;

@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController {

	NSArray* _allVolumeRepresentations;
	NSArray* _mountedVolumeIdentifiers;
	NSMutableIndexSet* _selectedVolumesIndexes;

}
-(void)_done:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canMoveToNextStep;
-(id)tableCellCheckmarkImageDisabled;
-(void)selectedVolumesIndexesDidChange;
-(id)initWithVolumes:(id)arg1 mountedVolumeIdentifiers:(id)arg2 ;
-(id)defaultRightBarButtonItem;
-(void)setupTableViewSections;
@end

