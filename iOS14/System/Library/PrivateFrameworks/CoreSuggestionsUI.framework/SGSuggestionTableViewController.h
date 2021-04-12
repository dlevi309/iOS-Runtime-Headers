/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SGSuggestionViewControllerPresenter.h>

@class SGSuggestionStore, NSString;

@interface SGSuggestionTableViewController : UITableViewController <SGSuggestionViewControllerPresenter> {

	SGSuggestionStore* _suggestionStore;

}

@property (nonatomic,retain) SGSuggestionStore * suggestionStore;              //@synthesize suggestionStore=_suggestionStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dismissViewController:(id)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)updatePrefferedSize;
-(void)listDidChangeNotification:(id)arg1 ;
-(SGSuggestionStore *)suggestionStore;
-(void)setSuggestionStore:(SGSuggestionStore *)arg1 ;
@end

