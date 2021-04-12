/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewController.h>

@protocol _SFBookmarkTextEntryTableViewControllerDelegate;
@class NSString, _SFBookmarkTextEntryTableViewCell;

@interface _SFBookmarkTextEntryTableViewController : UITableViewController {

	id<_SFBookmarkTextEntryTableViewControllerDelegate> _delegate;
	NSString* _initialText;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	_SFBookmarkTextEntryTableViewCell* _textEntryCell;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithBookmarkInfoViewField:(unsigned long long)arg1 text:(id)arg2 autocapitalizationType:(long long)arg3 autocorrectionType:(long long)arg4 delegate:(id)arg5 ;
-(void)_returnWasPressedInTextField:(id)arg1 ;
@end

