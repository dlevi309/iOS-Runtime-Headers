/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@class NSArray, NSMutableIndexSet;

@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController {

	NSArray* _allVolumeRepresentations;
	NSArray* _mountedVolumeIdentifiers;
	NSMutableIndexSet* _selectedVolumesIndexes;

}
-(void)viewDidLoad;
-(void)_done:(id)arg1 ;
-(id)tableCellCheckmarkImageDisabled;
-(BOOL)_canMoveToNextStep;
-(void)selectedVolumesIndexesDidChange;
-(id)initWithVolumes:(id)arg1 mountedVolumeIdentifiers:(id)arg2 ;
-(id)defaultRightBarButtonItem;
-(void)setupTableViewSections;
@end

