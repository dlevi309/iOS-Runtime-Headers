/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <UIKitCore/UITableViewController.h>

@class WKDataListSuggestionsControl;

@interface WKDataListSuggestionsViewController : UITableViewController {

	WKDataListSuggestionsControl* _control;

}

@property (assign,nonatomic,__weak) WKDataListSuggestionsControl * control;              //@synthesize control=_control - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(WKDataListSuggestionsControl *)control;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)reloadData;
-(void)setControl:(WKDataListSuggestionsControl *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

