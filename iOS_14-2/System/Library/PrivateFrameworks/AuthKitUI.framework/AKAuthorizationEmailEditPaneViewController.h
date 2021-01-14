/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AKAuthorizationPaneViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSString, AKAuthorizationScopeChoices;

@interface AKAuthorizationEmailEditPaneViewController : AKAuthorizationPaneViewController <UITableViewDataSource, UITableViewDelegate> {

	NSString* _applicationName;

}

@property (nonatomic,readonly) AKAuthorizationScopeChoices * editableScopeChoices; 
@property (nonatomic,retain) NSString * applicationName;                                        //@synthesize applicationName=_applicationName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)applicationName;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(AKAuthorizationScopeChoices *)editableScopeChoices;
-(id)tableView:(id)arg1 anonymousCellForRow:(unsigned long long)arg2 ;
-(id)tableView:(id)arg1 emailCellForRow:(unsigned long long)arg2 ;
@end

