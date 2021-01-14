/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCUITableViewController.h>

@class NSArray;

@interface MCNewCertificateDetailsViewController : MCUITableViewController {

	id _certificateTrust;
	NSArray* _keyValueSections;
	NSArray* _keyValueSectionTitles;

}

@property (nonatomic,retain) id certificateTrust;                          //@synthesize certificateTrust=_certificateTrust - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;                   //@synthesize keyValueSections=_keyValueSections - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSectionTitles;              //@synthesize keyValueSectionTitles=_keyValueSectionTitles - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)_setup;
-(id)init;
-(id)initWithStyle:(long long)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithCertificateProperties:(id)arg1 ;
-(NSArray *)keyValueSections;
-(NSArray *)keyValueSectionTitles;
-(id)certificateTrust;
-(void)setCertificateTrust:(id)arg1 ;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(void)setKeyValueSectionTitles:(NSArray *)arg1 ;
@end

