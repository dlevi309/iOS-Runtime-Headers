/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <CoreCDPUI/CDPTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol CDPDevicePickerDelegate;
@class NSArray, UIButton, NSString;

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _devices;
	NSArray* _escapeOffers;
	id<CDPDevicePickerDelegate> _delegate;
	UIButton* _remoteApprovalButton;

}

@property (nonatomic,copy) NSArray * devices;                       //@synthesize devices=_devices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(NSArray *)devices;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setDevices:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)viewForFooterInTableView:(id)arg1 ;
-(double)heightForFooterInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithDevices:(id)arg1 delegate:(id)arg2 ;
-(id)escapeOffers;
@end

