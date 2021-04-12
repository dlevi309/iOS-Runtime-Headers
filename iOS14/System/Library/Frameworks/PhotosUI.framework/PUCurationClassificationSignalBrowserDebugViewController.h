/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary, PUCurationClassificationSignalAssetBrowserDebugViewController;

@interface PUCurationClassificationSignalBrowserDebugViewController : UITableViewController {

	NSArray* _sectionNames;
	NSDictionary* _signalIdentifiersBySectionName;
	NSDictionary* _signalInfoBySignalIdentifier;
	NSDictionary* _countsBySignalIdentifier;
	NSDictionary* _signalConfidenceByAssetUUIDBySignalIdentifier;
	unsigned long long _numberOfAssets;
	PUCurationClassificationSignalAssetBrowserDebugViewController* _assetCollectionViewController;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)_fetchSignals;
-(id)signalNameForUnknownSignalIdentifier:(int)arg1 ;
-(id)signalIdentifiersForSection:(long long)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
@end

