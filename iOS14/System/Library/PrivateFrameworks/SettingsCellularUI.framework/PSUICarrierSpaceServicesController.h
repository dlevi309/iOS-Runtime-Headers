/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface PSUICarrierSpaceServicesController : PSListController {

	NSArray* _appsList;

}

@property (nonatomic,retain) NSArray * appsList;              //@synthesize appsList=_appsList - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)specifiers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(id)primaryAppSpecifier;
-(BOOL)shouldShowMoreApps;
-(void)moreAppsTapped:(id)arg1 ;
@end

