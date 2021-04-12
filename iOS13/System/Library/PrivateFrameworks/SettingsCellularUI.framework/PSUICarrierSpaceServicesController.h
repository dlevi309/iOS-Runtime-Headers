/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface PSUICarrierSpaceServicesController : PSListController {

	NSArray* _appsList;

}

@property (nonatomic,retain) NSArray * appsList;              //@synthesize appsList=_appsList - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)specifiers;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(id)primaryAppSpecifier;
-(BOOL)shouldShowMoreApps;
-(void)moreAppsTapped:(id)arg1 ;
@end

