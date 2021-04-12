/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewController.h>

@protocol SFContactAutoFillViewControllerFiller;
@class CNContact, NSArray;

@interface SFContactAutoFillViewController : UITableViewController {

	CNContact* _contact;
	NSArray* _matches;
	NSArray* _propertyValues;
	id<SFContactAutoFillViewControllerFiller> _autoFiller;

}

@property (assign,nonatomic,__weak) id<SFContactAutoFillViewControllerFiller> autoFiller;              //@synthesize autoFiller=_autoFiller - In the implementation block
-(id)properties;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canBecomeFirstResponder;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)autoFill:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(id)initWithMatches:(id)arg1 contact:(id)arg2 ;
-(void)setAutoFiller:(id<SFContactAutoFillViewControllerFiller>)arg1 ;
-(id)matchesForProperty:(id)arg1 ;
-(id)valuesFromPropertyMatches:(id)arg1 ;
-(id)_valueForProperty:(id)arg1 identifier:(id)arg2 ;
-(id<SFContactAutoFillViewControllerFiller>)autoFiller;
@end

