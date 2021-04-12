/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface CertificateDetailsViewController : UITableViewController {

	id _certificateTrust;
	NSArray* _keyValueSections;
	NSArray* _keyValueSectionTitles;

}

@property (nonatomic,retain) id certificateTrust;                          //@synthesize certificateTrust=_certificateTrust - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;                   //@synthesize keyValueSections=_keyValueSections - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSectionTitles;              //@synthesize keyValueSectionTitles=_keyValueSectionTitles - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(void)_setup;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(void)setCertificateProperties:(id)arg1 ;
-(id)certificateTrust;
-(void)setCertificateTrust:(id)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(NSArray *)keyValueSections;
-(NSArray *)keyValueSectionTitles;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(void)setKeyValueSectionTitles:(NSArray *)arg1 ;
@end

