/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithBookmarkInfoViewField:(unsigned long long)arg1 text:(id)arg2 autocapitalizationType:(long long)arg3 autocorrectionType:(long long)arg4 delegate:(id)arg5 ;
-(void)_returnWasPressedInTextField:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

