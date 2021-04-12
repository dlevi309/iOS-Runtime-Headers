/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSMutableArray, NSString;

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource> {

	UITableView* _tableView;
	NSMutableArray* _tableSections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)appendInfoFromCertView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 certificateProperties:(id)arg2 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_titleForIndexPath:(id)arg1 ;
-(id)_detailForIndexPath:(id)arg1 ;
@end

