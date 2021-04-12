/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDCloudSyncRepository, CKOperationGroup, NSString, NSUUID, HDAssertion, NSDictionary;

@interface HDCloudSyncOperationConfiguration : NSObject {

	HDCloudSyncRepository* _repository;
	CKOperationGroup* _operationGroup;
	NSString* _syncContainerPrefix;
	unsigned long long _options;
	long long _reason;
	NSUUID* _syncIdentifier;
	HDAssertion* _accessibilityAssertion;
	NSString* _shortSyncIdentifier;

}

@property (nonatomic,readonly) HDCloudSyncRepository * repository;                   //@synthesize repository=_repository - In the implementation block
@property (nonatomic,readonly) CKOperationGroup * operationGroup;                    //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncContainerPrefix;                  //@synthesize syncContainerPrefix=_syncContainerPrefix - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long reason;                                     //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * syncIdentifier;                         //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (nonatomic,readonly) HDAssertion * accessibilityAssertion;                 //@synthesize accessibilityAssertion=_accessibilityAssertion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsDictionary; 
@property (nonatomic,copy,readonly) NSString * shortSyncIdentifier;                  //@synthesize shortSyncIdentifier=_shortSyncIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL rebaseProhibited; 
-(unsigned long long)options;
-(CKOperationGroup *)operationGroup;
-(long long)reason;
-(NSUUID *)syncIdentifier;
-(HDCloudSyncRepository *)repository;
-(void)dealloc;
-(HDAssertion *)accessibilityAssertion;
-(id)pushStoreWithIdentifier:(id)arg1 container:(id)arg2 error:(id*)arg3 ;
-(id)pushStoreIdentifierForContainer:(id)arg1 error:(id*)arg2 ;
-(NSString *)syncContainerPrefix;
-(id)databaseForContainer:(id)arg1 ;
-(id)descriptionForSignpost;
-(NSDictionary *)analyticsDictionary;
-(BOOL)rebaseProhibited;
-(id)initWithRepository:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 options:(unsigned long long)arg4 reason:(long long)arg5 accessibilityAssertion:(id)arg6 syncIdentifier:(id)arg7 ;
-(NSString *)shortSyncIdentifier;
@end

