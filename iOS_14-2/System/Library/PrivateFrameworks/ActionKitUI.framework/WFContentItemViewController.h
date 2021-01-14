/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class WFContentItem, NSString;

@interface WFContentItemViewController : UITableViewController <UIDocumentInteractionControllerDelegate> {

	WFContentItem* _contentItem;

}

@property (nonatomic,readonly) WFContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithContentItem:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(WFContentItem *)contentItem;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
@end

