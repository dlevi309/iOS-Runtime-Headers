/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSString, NSDate, CertInfoCertificateHeaderCell, CertInfoCertificateSummaryDescriptionCell;

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSString* _trustTitle;
	NSString* _trustSubtitle;
	NSString* _purpose;
	NSDate* _expirationDate;
	/*^block*/id _moreDetailsSelectedBlock;
	CertInfoCertificateHeaderCell* _headerCell;
	CertInfoCertificateSummaryDescriptionCell* _descriptionCell;

}

@property (nonatomic,retain) CertInfoCertificateHeaderCell * headerCell;                               //@synthesize headerCell=_headerCell - In the implementation block
@property (nonatomic,retain) CertInfoCertificateSummaryDescriptionCell * descriptionCell;              //@synthesize descriptionCell=_descriptionCell - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSString * trustTitle;                                                    //@synthesize trustTitle=_trustTitle - In the implementation block
@property (nonatomic,retain) NSString * trustSubtitle;                                                 //@synthesize trustSubtitle=_trustSubtitle - In the implementation block
@property (nonatomic,retain) NSString * purpose;                                                       //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setPurpose:(NSString *)arg1 ;
-(NSString *)purpose;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg1 ;
-(NSString *)trustTitle;
-(void)setTrustTitle:(NSString *)arg1 ;
-(NSString *)trustSubtitle;
-(void)setTrustSubtitle:(NSString *)arg1 ;
-(void)setMoreDetailsSelectedBlock:(/*^block*/id)arg1 ;
-(void)setHeaderCell:(CertInfoCertificateHeaderCell *)arg1 ;
-(void)setDescriptionCell:(CertInfoCertificateSummaryDescriptionCell *)arg1 ;
-(id)_cellForReuseIdentifier:(id)arg1 ;
-(CertInfoCertificateHeaderCell *)headerCell;
-(CertInfoCertificateSummaryDescriptionCell *)descriptionCell;
@end

