/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSURL, UITableView, UILabel, PKTextInputDebugLogEntryRerun, NSMutableDictionary, PKTextInputDebugSharpenerLog, NSString;

@interface PKTextInputDebugSharpenerLogViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSURL* _sharpenerLogURL;
	UITableView* __mainTableView;
	UILabel* __tableHeaderLabel;
	PKTextInputDebugLogEntryRerun* __currentEntryRerun;
	NSMutableDictionary* __rerunResultsBySection;
	PKTextInputDebugSharpenerLog* _sharpenerLog;

}

@property (nonatomic,retain) UITableView * _mainTableView;                                    //@synthesize _mainTableView=__mainTableView - In the implementation block
@property (nonatomic,retain) UILabel * _tableHeaderLabel;                                     //@synthesize _tableHeaderLabel=__tableHeaderLabel - In the implementation block
@property (nonatomic,retain) PKTextInputDebugLogEntryRerun * _currentEntryRerun;              //@synthesize _currentEntryRerun=__currentEntryRerun - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _rerunResultsBySection;                  //@synthesize _rerunResultsBySection=__rerunResultsBySection - In the implementation block
@property (nonatomic,readonly) PKTextInputDebugSharpenerLog * sharpenerLog;                   //@synthesize sharpenerLog=_sharpenerLog - In the implementation block
@property (nonatomic,readonly) NSURL * sharpenerLogURL;                                       //@synthesize sharpenerLogURL=_sharpenerLogURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canLoadFromFileAtURL:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)_handleDoneButton:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_handleActionButton:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(UITableView *)_mainTableView;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)initWithSharpenerLog:(id)arg1 ;
-(void)set_tableHeaderLabel:(UILabel *)arg1 ;
-(id)_tableHeaderText;
-(NSURL *)sharpenerLogURL;
-(UILabel *)_tableHeaderLabel;
-(PKTextInputDebugSharpenerLog *)sharpenerLog;
-(NSMutableDictionary *)_rerunResultsBySection;
-(void)_handleRerunButton:(id)arg1 ;
-(void)_configureCell:(id)arg1 asDrawingDisplayForEntry:(id)arg2 ;
-(void)_configureCell:(id)arg1 withTitle:(id)arg2 details:(id)arg3 ;
-(PKTextInputDebugLogEntryRerun *)_currentEntryRerun;
-(void)_rerunRecognitionForEntryAtIndex:(long long)arg1 ;
-(void)set_currentEntryRerun:(PKTextInputDebugLogEntryRerun *)arg1 ;
-(id)initWithSharpenerLogURL:(id)arg1 error:(id*)arg2 ;
-(void)set_mainTableView:(UITableView *)arg1 ;
@end

