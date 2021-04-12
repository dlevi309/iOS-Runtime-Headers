/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CNContactGroupPickerDelegate;
@class NSArray, UITableView, NSString;

@interface CNContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _pickableGroups;
	UITableView* _tableView;
	NSArray* _prohibitedPropertyKeys;
	id<CNContactGroupPickerDelegate> _groupPickerDelegate;

}

@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                         //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactGroupPickerDelegate> groupPickerDelegate;              //@synthesize groupPickerDelegate=_groupPickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertySections;
+(id)pickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3 ;
+(BOOL)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 ;
+(BOOL)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancel:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(id<CNContactGroupPickerDelegate>)groupPickerDelegate;
-(void)setGroupPickerDelegate:(id<CNContactGroupPickerDelegate>)arg1 ;
-(NSArray *)prohibitedPropertyKeys;
-(id)initWithGroups:(id)arg1 ;
-(id)_loadPickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

