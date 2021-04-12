/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation {

	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;              //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
-(void)main;
-(id)activityCreate;
-(unsigned long long)quotaAvailable;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
@end

