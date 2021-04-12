/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class PKActivationMethodTableViewCell, PKPaymentVerificationController, NSArray, NSString;

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDelegate, UITableViewDataSource> {

	PKActivationMethodTableViewCell* _sizingCell;
	PKPaymentVerificationController* _verificationController;
	NSArray* _verificationChannels;
	unsigned long long _selectedIndex;

}

@property (nonatomic,readonly) PKPaymentVerificationController * verificationController;              //@synthesize verificationController=_verificationController - In the implementation block
@property (nonatomic,retain) NSArray * verificationChannels;                                          //@synthesize verificationChannels=_verificationChannels - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(NSArray *)verificationChannels;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedIndex;
-(id)_detailTextLabelForChannel:(id)arg1 ;
-(void)setVerificationChannels:(NSArray *)arg1 ;
-(id)initWithVerificationController:(id)arg1 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(PKPaymentVerificationController *)verificationController;
-(id)newVerificationRequest;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

