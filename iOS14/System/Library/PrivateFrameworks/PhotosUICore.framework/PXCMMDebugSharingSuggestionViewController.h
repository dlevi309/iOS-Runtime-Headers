/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSArray, NSDictionary, UISegmentedControl, UITableView, PHAssetCollection, NSString;

@interface PXCMMDebugSharingSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {

	NSArray* _sectionTitles;
	NSDictionary* _tableContent;
	NSDictionary* _sourceDictionary;
	UISegmentedControl* _segmentedControl;
	UITableView* _tableView;
	PHAssetCollection* _sourceSuggestion;

}

@property (nonatomic,retain) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) PHAssetCollection * sourceSuggestion;               //@synthesize sourceSuggestion=_sourceSuggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)generateSectionTitles:(out id*)arg1 andTableContent:(out id*)arg2 forIndex:(long long)arg3 sourceSuggestion:(id)arg4 sourceDictionary:(id)arg5 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(id)initWithSharingSuggestion:(id)arg1 ;
-(PHAssetCollection *)sourceSuggestion;
-(void)setSourceSuggestion:(PHAssetCollection *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_switchLogsAction:(id)arg1 ;
-(void)_sendByEmailAction:(id)arg1 ;
-(void)_closeAction:(id)arg1 ;
-(id)_debugDictionary;
@end

