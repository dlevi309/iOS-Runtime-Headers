/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class CKContainer, CKDatabase, NSBundle;

@interface WFRemoteQuarantinePolicyManager : NSObject {

	CKContainer* _container;
	CKDatabase* _database;
	NSBundle* _localPolicyBundle;

}

@property (nonatomic,retain) CKContainer * container;                     //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) CKDatabase * database;                       //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSBundle * localPolicyBundle;              //@synthesize localPolicyBundle=_localPolicyBundle - In the implementation block
+(id)sharedManager;
-(void)scheduleRegularPolicyUpdatesWithDatabaseProvider:(id)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(id)init;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)localizedString:(id)arg1 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(CKDatabase *)database;
-(CKContainer *)container;
-(void)updatePolicyWithXPCActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)policyString;
-(id)policyAssetBundle;
-(id)latestRemotePolicyAssetBundle;
-(id)policyStringForBundleIfValid:(id)arg1 ;
-(BOOL)persistAssetToDisk:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)createDirectoryForAssetWithIdentifier:(id)arg1 directoryExists:(BOOL*)arg2 error:(id*)arg3 ;
-(NSBundle *)localPolicyBundle;
@end

