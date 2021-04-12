/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITableViewController.h>

@class WKSelectPopover, WKContentView;

@interface WKSelectTableViewController : UITableViewController {

	unsigned long long _singleSelectionIndex;
	unsigned long long _singleSelectionSection;
	long long _numberOfSections;
	BOOL _allowsMultipleSelection;
	double _fontSize;
	double _maximumTextWidth;
	long long _textAlignment;
	WKSelectPopover* _popover;
	WKContentView* _contentView;

}

@property (nonatomic,readonly) BOOL shouldDismissWithAnimation; 
@property (assign,nonatomic) WKSelectPopover * popover;                      //@synthesize popover=_popover - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(WKSelectPopover *)popover;
-(void)setPopover:(WKSelectPopover *)arg1 ;
-(id)initWithView:(id)arg1 hasGroups:(BOOL)arg2 ;
-(long long)findItemIndexAt:(id)arg1 ;
-(OptionItem*)findItemAt:(id)arg1 ;
-(void)populateCell:(id)arg1 withItem:(const OptionItem*)arg2 ;
-(BOOL)shouldDismissWithAnimation;
@end

