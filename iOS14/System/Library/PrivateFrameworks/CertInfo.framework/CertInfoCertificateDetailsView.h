/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)layoutSubviews;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_sectionsFromProperties:(id)arg1 ;
-(id)_cellInfosForSection:(id)arg1 ;
-(id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2 ;
-(void)appendInfoFromCertView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 certificateProperties:(id)arg2 ;
-(id)_titleForIndexPath:(id)arg1 ;
-(id)_detailForIndexPath:(id)arg1 ;
@end

