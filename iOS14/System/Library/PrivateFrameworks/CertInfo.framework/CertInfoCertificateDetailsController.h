/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)showsDoneButton;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id<CertInfoCertificateDetailsControllerDelegate>)delegate;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)setDelegate:(id<CertInfoCertificateDetailsControllerDelegate>)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 certificateIndex:(long long)arg2 ;
-(id)_sectionsForProperties:(id)arg1 ;
-(id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2 ;
-(id)_propertiesForIndexPath:(id)arg1 ;
@end

