/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <OnBoardingKit/OBPrivacyCombinedController.h>
#import <libobjc.A.dylib/OBNavigationBarTitleTransistor.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSLayoutConstraint, NSArray, NSString;

@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <OBNavigationBarTitleTransistor, UITableViewDelegate, UITableViewDataSource> {

	BOOL _isUnifiedAbout;
	NSLayoutConstraint* _tableViewHeightConstraint;
	NSArray* _identifiers;
	NSArray* _privacyFlows;

}

@property (nonatomic,retain) NSLayoutConstraint * tableViewHeightConstraint;              //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * identifiers;                                       //@synthesize identifiers=_identifiers - In the implementation block
@property (retain) NSArray * privacyFlows;                                                //@synthesize privacyFlows=_privacyFlows - In the implementation block
@property (assign) BOOL isUnifiedAbout;                                                   //@synthesize isUnifiedAbout=_isUnifiedAbout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifiers:(id)arg1 ;
-(NSArray *)identifiers;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)showPrivacyGateway:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setIsUnifiedAbout:(BOOL)arg1 ;
-(BOOL)isUnifiedAbout;
-(NSArray *)privacyFlows;
-(void)setPrivacyFlows:(NSArray *)arg1 ;
-(void)updateTableViewFrameToMatchContentSize;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
@end

