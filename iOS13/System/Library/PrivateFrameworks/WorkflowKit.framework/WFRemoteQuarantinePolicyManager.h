/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
-(id)localizedString:(id)arg1 ;
-(id)policyString;
-(id)policyAssetBundle;
-(id)latestRemotePolicyAssetBundle;
-(id)policyStringForBundleIfValid:(id)arg1 ;
-(void)updatePolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)persistAssetToDisk:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)createDirectoryForAssetWithIdentifier:(id)arg1 directoryExists:(BOOL*)arg2 error:(id*)arg3 ;
-(NSBundle *)localPolicyBundle;
@end

