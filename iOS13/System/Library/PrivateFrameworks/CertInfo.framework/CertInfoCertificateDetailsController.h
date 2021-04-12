/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UITableViewController.h>

@protocol CertInfoCertificateDetailsControllerDelegate;
@class NSArray, UIBarButtonItem;

@interface CertInfoCertificateDetailsController : UITableViewController {

	id<CertInfoCertificateDetailsControllerDelegate> _delegate;
	NSArray* _sectionDictionaries;
	UIBarButtonItem* _doneButton;
	unsigned _showsDoneButton : 1;

}

@property (assign,nonatomic,__weak) id<CertInfoCertificateDetailsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton; 
-(id<CertInfoCertificateDetailsControllerDelegate>)delegate;
-(void)setDelegate:(id<CertInfoCertificateDetailsControllerDelegate>)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 certificateIndex:(long long)arg2 ;
-(id)_sectionsForProperties:(id)arg1 ;
-(id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2 ;
-(id)_propertiesForIndexPath:(id)arg1 ;
@end

