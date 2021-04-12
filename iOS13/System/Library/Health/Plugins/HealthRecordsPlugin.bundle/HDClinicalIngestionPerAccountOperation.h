/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalIngestionOperation.h>

@class HDClinicalAccount;

@interface HDClinicalIngestionPerAccountOperation : HDClinicalIngestionOperation {

	HDClinicalAccount* _account;

}

@property (copy,readonly) HDClinicalAccount * account; 
-(id)debugDescription;
-(HDClinicalAccount *)account;
-(id)initWithTask:(id)arg1 account:(id)arg2 nextOperation:(id)arg3 ;
@end

