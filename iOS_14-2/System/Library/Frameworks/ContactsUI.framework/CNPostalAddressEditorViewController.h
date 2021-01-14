/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (readonly) BOOL isPresentingModalViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellIdentifierForClass:(Class)arg1 ;
+(id)cellIdentifierForEditingProperty:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3 ;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3 ;
-(void)propertyCellDidChangeLayout:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancel:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)done:(id)arg1 ;
-(void)viewDidLoad;
-(id)contactViewCache;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPresentingModalViewController;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(BOOL)arg3 ;
-(void)_rebuildPropertyGroupItems:(BOOL)arg1 ;
-(void)validateContents;
-(void)_startEditingFirstCell;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)registerContactCellClass:(Class)arg1 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
@end

