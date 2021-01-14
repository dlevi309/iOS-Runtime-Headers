/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class AMSBTLEAdvertisementManager, NSString, UITextField, UIActivityIndicatorView, NSTimer;

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {

	AMSBTLEAdvertisementManager* advertisingManager;
	NSString* statusString;
	UITextField* serviceNameField;
	BOOL advertising;
	BOOL isErrorMessage;
	UIActivityIndicatorView* indicator;
	NSString* theServiceName;
	long long advertiseTimeout;
	long long fullRefreshCounter;
	NSTimer* advertiseTimer;
	NSTimer* messageTimer;
	BOOL didCleanup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)activateController:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)cleanup;
-(id)statusString;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)title;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)stopTimers;
-(id)advertisedServiceName;
-(void)advertiseTimerFired:(id)arg1 ;
-(void)updateAdvertiseUI;
-(void)deactivateController:(id)arg1 ;
-(BOOL)advertiseServiceWithName:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)stopAdvertisingServiceWithCompletionBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setStatusString:(id)arg1 animateIndicator:(BOOL)arg2 isError:(BOOL)arg3 ;
-(void)textFieldDone:(id)arg1 ;
-(void)advertiseServiceSwitchToggled:(id)arg1 ;
-(BOOL)changeServiceNameTo:(id)arg1 completionBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)messageTimerFired:(id)arg1 ;
-(BOOL)disconnectLocalPeripheral;
@end

