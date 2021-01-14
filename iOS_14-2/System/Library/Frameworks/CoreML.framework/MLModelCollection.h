/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, NSDictionary, TRIClient;

@interface MLModelCollection : NSObject {

	NSString* _identifier;
	NSDictionary* _entries;
	NSString* _deploymentID;
	NSString* _namespaceName;
	TRIClient* _trialClient;

}

@property (nonatomic,copy) NSDictionary * entries;                      //@synthesize entries=_entries - In the implementation block
@property (nonatomic,copy) NSString * deploymentID;                     //@synthesize deploymentID=_deploymentID - In the implementation block
@property (nonatomic,readonly) NSString * namespaceName;                //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) TRIClient * trialClient;                 //@synthesize trialClient=_trialClient - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(Class)getTrialDownloadOptionsClass;
+(Class)getTrialClientClass;
+(id)_namespaceNameFromCollectionIdentifier:(id)arg1 ;
+(id)beginAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(Class)getTrialFactorLevelClass;
+(Class)getTrialLevelClass;
+(void)endAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(Class)getTrialFileClass;
+(Class)getTrialFactorClass;
-(void)setEntries:(NSDictionary *)arg1 ;
-(NSDictionary *)entries;
-(BOOL)_register;
-(id)_downloadOptions;
-(NSString *)namespaceName;
-(BOOL)_downloadWithProgress:(/*^block*/id)arg1 ;
-(void)_registerForUpdates;
-(BOOL)_endAccess;
-(void)_handleTrialUpdateForNamespaceName:(id)arg1 ;
-(void)_setDeploymentID;
-(void)_populateEntries;
-(NSString *)deploymentID;
-(void)setDeploymentID:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(TRIClient *)trialClient;
@end

