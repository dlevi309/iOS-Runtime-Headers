/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNPresenterDelegate.h>
#import <libobjc.A.dylib/CNPropertyCellDelegate.h>

@class NSMutableArray, NSString, CNMutableContact, CNCardPropertyGroup;

@interface CNPostalAddressEditorViewController : UITableViewController <CNPresenterDelegate, CNPropertyCellDelegate> {

	NSMutableArray* _propertyItems;
	NSString* _propertyKey;
	CNMutableContact* _contact;
	CNCardPropertyGroup* _propertyGroup;
	BOOL _editNames;
	BOOL _editingExistingContact;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isPresentingModalViewController; 
+(id)cellIdentifierForClass:(Class)arg1 ;
+(id)cellIdentifierForEditingProperty:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)done:(id)arg1 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(id)contactViewCache;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPresentingModalViewController;
-(void)registerContactCellClass:(Class)arg1 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3 ;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3 ;
-(void)propertyCellDidChangeLayout:(id)arg1 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(BOOL)arg3 ;
-(void)_rebuildPropertyGroupItems:(BOOL)arg1 ;
-(void)validateContents;
-(void)_startEditingFirstCell;
@end

