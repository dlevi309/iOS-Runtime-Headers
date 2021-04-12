/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface WFContentItemsViewController : UITableViewController {

	BOOL _allowsCoercion;
	NSArray* _contentItems;

}

@property (nonatomic,retain) NSArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
@property (assign,nonatomic) BOOL allowsCoercion;                 //@synthesize allowsCoercion=_allowsCoercion - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)allowsCoercion;
-(void)setContentItems:(NSArray *)arg1 ;
-(NSArray *)contentItems;
-(void)setAllowsCoercion:(BOOL)arg1 ;
@end

