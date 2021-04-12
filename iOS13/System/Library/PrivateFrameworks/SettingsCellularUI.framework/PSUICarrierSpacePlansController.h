/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CTCarrierSpaceClientDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, RemoteUIController, CTCarrierSpaceClient, NSString;

@interface PSUICarrierSpacePlansController : PSListController <CTCarrierSpaceClientDelegate, RemoteUIControllerDelegate> {

	NSObject*<OS_dispatch_queue> _carrierSpaceQueue;
	RemoteUIController* _remoteUIController;
	CTCarrierSpaceClient* _carrierSpaceClient;

}

@property (nonatomic,retain) CTCarrierSpaceClient * carrierSpaceClient;              //@synthesize carrierSpaceClient=_carrierSpaceClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(CTCarrierSpaceClient *)carrierSpaceClient;
-(void)setCarrierSpaceClient:(CTCarrierSpaceClient *)arg1 ;
-(id)stringFromGroupCategory:(long long)arg1 ;
-(id)detailForPlanOption:(id)arg1 ;
-(void)moreDetailsButtonTapped:(id)arg1 ;
-(void)dismissPlanDetail;
@end

