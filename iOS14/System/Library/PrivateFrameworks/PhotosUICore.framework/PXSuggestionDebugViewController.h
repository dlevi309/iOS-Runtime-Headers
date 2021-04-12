/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class UISegmentedControl, UITableView, NSArray, NSDictionary, PHSuggestion, NSString;

@interface PXSuggestionDebugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {

	UISegmentedControl* _segmentedControl;
	UITableView* _tableView;
	NSArray* _sectionTitles;
	NSDictionary* _tableContent;
	NSDictionary* _sourceDictionary;
	PHSuggestion* _suggestion;
	NSDictionary* _suggestionInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_switchLogsAction:(id)arg1 ;
-(void)_setupWithDictionary:(id)arg1 ;
-(void)_sendByEmailAction:(id)arg1 ;
-(void)_closeAction:(id)arg1 ;
-(id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 ;
-(id)infoSectionsWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 compact:(BOOL)arg3 ;
-(id)existingSectionsWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 ;
@end

