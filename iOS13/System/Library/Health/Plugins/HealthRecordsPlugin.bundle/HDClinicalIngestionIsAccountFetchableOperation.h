/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class HDClinicalAccount;

@interface HDClinicalIngestionIsAccountFetchableOperation : HDClinicalIngestionPerAccountOperation {

	BOOL _accountFetchable;
	HDClinicalAccount* _refreshedAccount;

}

@property (assign,nonatomic) BOOL accountFetchable;                             //@synthesize accountFetchable=_accountFetchable - In the implementation block
@property (nonatomic,retain) HDClinicalAccount * refreshedAccount;              //@synthesize refreshedAccount=_refreshedAccount - In the implementation block
-(void)main;
-(BOOL)_refreshAccountWithErrorString:(id*)arg1 ;
-(BOOL)_verifyShouldFetchWithErrorString:(id*)arg1 ;
-(void)setAccountFetchable:(BOOL)arg1 ;
-(void)setRefreshedAccount:(HDClinicalAccount *)arg1 ;
-(HDClinicalAccount *)refreshedAccount;
-(BOOL)accountFetchable;
@end

