/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)contentItems;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)allowsCoercion;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setContentItems:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setAllowsCoercion:(BOOL)arg1 ;
@end

