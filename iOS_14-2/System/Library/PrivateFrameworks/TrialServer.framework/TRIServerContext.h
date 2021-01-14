/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRIPaths, TRIXPCActivityManagementProtocol;
@class TRIExperimentDatabase, TRINamespaceDatabase, TRITaskDatabase, TRIClient, TRIKVStore, TRIContentTracker, TRIDatabase;

@interface TRIServerContext : NSObject {

	BOOL _useCKNative;
	id<TRIPaths> _paths;
	TRIExperimentDatabase* _experimentDatabase;
	TRINamespaceDatabase* _namespaceDatabase;
	TRITaskDatabase* _taskDatabase;
	TRIClient* _client;
	TRIKVStore* _keyValueStore;
	TRIContentTracker* _contentTracker;
	id<TRIXPCActivityManagementProtocol> _xpcActivityManager;
	TRIDatabase* _underlyingDatabase;

}

@property (nonatomic,readonly) TRIDatabase * underlyingDatabase;                                            //@synthesize underlyingDatabase=_underlyingDatabase - In the implementation block
@property (nonatomic,readonly) id<TRIPaths> paths;                                                          //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) TRIExperimentDatabase * experimentDatabase;                                  //@synthesize experimentDatabase=_experimentDatabase - In the implementation block
@property (nonatomic,readonly) TRINamespaceDatabase * namespaceDatabase;                                    //@synthesize namespaceDatabase=_namespaceDatabase - In the implementation block
@property (nonatomic,readonly) TRITaskDatabase * taskDatabase;                                              //@synthesize taskDatabase=_taskDatabase - In the implementation block
@property (nonatomic,readonly) TRIClient * client;                                                          //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) TRIKVStore * keyValueStore;                                                  //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,readonly) TRIContentTracker * contentTracker;                                          //@synthesize contentTracker=_contentTracker - In the implementation block
@property (nonatomic,__weak,readonly) id<TRIXPCActivityManagementProtocol> xpcActivityManager;              //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
@property (assign,nonatomic) BOOL useCKNative;                                                              //@synthesize useCKNative=_useCKNative - In the implementation block
-(id<TRIPaths>)paths;
-(TRIClient *)client;
-(id)init;
-(id<TRIXPCActivityManagementProtocol>)xpcActivityManager;
-(void)setXpcActivityManager:(id<TRIXPCActivityManagementProtocol>)arg1 ;
-(TRIKVStore *)keyValueStore;
-(TRINamespaceDatabase *)namespaceDatabase;
-(TRIExperimentDatabase *)experimentDatabase;
-(TRIContentTracker *)contentTracker;
-(TRIDatabase *)underlyingDatabase;
-(TRITaskDatabase *)taskDatabase;
-(void)logErrorMetric:(id)arg1 ;
-(id)initWithPaths:(id)arg1 client:(id)arg2 storageManagement:(id)arg3 xpcActivityManagement:(id)arg4 ;
-(void)_logInitErrorWithClient:(id)arg1 message:(id)arg2 ;
-(id)initWithPaths:(id)arg1 client:(id)arg2 storageManagement:(id)arg3 ;
-(BOOL)useCKNative;
-(void)setUseCKNative:(BOOL)arg1 ;
@end

