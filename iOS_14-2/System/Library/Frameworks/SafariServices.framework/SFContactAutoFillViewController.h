/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithMatches:(id)arg1 contact:(id)arg2 ;
-(void)setAutoFiller:(id<SFContactAutoFillViewControllerFiller>)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)autoFill:(id)arg1 ;
-(id<SFContactAutoFillViewControllerFiller>)autoFiller;
-(void)viewDidLoad;
-(id)matchesForProperty:(id)arg1 ;
-(id)valuesFromPropertyMatches:(id)arg1 ;
-(id)_valueForProperty:(id)arg1 identifier:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

