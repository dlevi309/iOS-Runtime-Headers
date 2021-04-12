/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDCloudSyncRepository, CKOperationGroup, NSString, NSUUID, HDAssertion;

@interface HDCloudSyncOperationConfiguration : NSObject {

	HDCloudSyncRepository* _repository;
	CKOperationGroup* _operationGroup;
	NSString* _syncContainerPrefix;
	unsigned long long _options;
	long long _reason;
	NSUUID* _syncIdentifier;
	HDAssertion* _accessibilityAssertion;

}

@property (nonatomic,readonly) HDCloudSyncRepository * repository;                //@synthesize repository=_repository - In the implementation block
@property (nonatomic,readonly) CKOperationGroup * operationGroup;                 //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncContainerPrefix;               //@synthesize syncContainerPrefix=_syncContainerPrefix - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * syncIdentifier;                      //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (nonatomic,readonly) HDAssertion * accessibilityAssertion;              //@synthesize accessibilityAssertion=_accessibilityAssertion - In the implementation block
@property (nonatomic,readonly) BOOL rebaseProhibited; 
-(void)dealloc;
-(unsigned long long)options;
-(long long)reason;
-(CKOperationGroup *)operationGroup;
-(HDCloudSyncRepository *)repository;
-(NSUUID *)syncIdentifier;
-(NSString *)syncContainerPrefix;
-(id)initWithRepository:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 options:(unsigned long long)arg4 reason:(long long)arg5 accessibilityAssertion:(id)arg6 syncIdentifier:(id)arg7 ;
-(id)descriptionForSignpost;
-(BOOL)rebaseProhibited;
-(id)databaseForContainer:(id)arg1 ;
-(id)pushStoreWithIdentifier:(id)arg1 container:(id)arg2 error:(id*)arg3 ;
-(id)pushStoreIdentifierForContainer:(id)arg1 error:(id*)arg2 ;
-(HDAssertion *)accessibilityAssertion;
@end

