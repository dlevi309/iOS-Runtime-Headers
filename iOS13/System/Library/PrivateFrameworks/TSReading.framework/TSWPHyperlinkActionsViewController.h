/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class TSWPHyperlinkField, TSWPHyperlinkSettingsViewController, NSString;

@interface TSWPHyperlinkActionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	TSWPHyperlinkField* _hyperlink;
	BOOL _readOnly;
	TSWPHyperlinkSettingsViewController* _hyperlinkSettingsViewController;

}

@property (nonatomic,retain) TSWPHyperlinkField * hyperlink;              //@synthesize hyperlink=_hyperlink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setHyperlink:(TSWPHyperlinkField *)arg1 ;
-(TSWPHyperlinkField *)hyperlink;
-(id)initWithHyperlink:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)hyperlinkSettingsViewController;
@end

