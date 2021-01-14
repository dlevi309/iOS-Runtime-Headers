/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewController.h>

@class NSNumberFormatter, WBSKnownTrackingThirdParty, UIView;

@interface SFPrivacyReportTrackerDetailViewController : UITableViewController {

	NSNumberFormatter* _numberFormatter;
	WBSKnownTrackingThirdParty* _tracker;
	UIView* _header;

}
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)initWithTracker:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_updateHeaderSize;
-(void)viewLayoutMarginsDidChange;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

