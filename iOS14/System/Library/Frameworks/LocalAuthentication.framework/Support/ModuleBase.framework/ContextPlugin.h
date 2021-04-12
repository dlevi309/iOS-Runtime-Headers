/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/

#import <libobjc.A.dylib/LAContextExternalizationProt.h>
#import <libobjc.A.dylib/LAContextServerEvaluationProt.h>

@class NSMutableDictionary, NSDictionary, LACachedExternalizedContext, Module, NSDate, NSString;

@interface ContextPlugin : NSObject <LAContextExternalizationProt, LAContextServerEvaluationProt> {

	NSMutableDictionary* _internalOperationOptions;
	BOOL _contextOwner;
	unsigned _instanceId;
	NSDictionary* _resultInfo;
	LACachedExternalizedContext* _cachedExternalizedContext;
	Module* _module;
	void* _underlyingPtr;
	NSDate* _creationTime;

}

@property (nonatomic,readonly) BOOL contextOwner;                                                    //@synthesize contextOwner=_contextOwner - In the implementation block
@property (nonatomic,retain) NSDictionary * resultInfo;                                              //@synthesize resultInfo=_resultInfo - In the implementation block
@property (nonatomic,readonly) LACachedExternalizedContext * cachedExternalizedContext;              //@synthesize cachedExternalizedContext=_cachedExternalizedContext - In the implementation block
@property (nonatomic,readonly) unsigned instanceId;                                                  //@synthesize instanceId=_instanceId - In the implementation block
@property (nonatomic,readonly) Module * module;                                                      //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) void* underlyingPtr;                                                  //@synthesize underlyingPtr=_underlyingPtr - In the implementation block
@property (nonatomic,readonly) NSDate * creationTime;                                                //@synthesize creationTime=_creationTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)pluginWithExternalizedContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned)instanceId;
-(void)setCredential:(id)arg1 type:(long long)arg2 options:(id)arg3 originator:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 request:(id)arg6 reply:(/*^block*/id)arg7 ;
-(id)externalizationObserver;
-(LACachedExternalizedContext *)cachedExternalizedContext;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)performOp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(void)setExternalizationObserver:(id)arg1 ;
-(void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void*)underlyingPtr;
-(id)initWithContextOwner:(BOOL)arg1 underlyingPtr:(void*)arg2 module:(id)arg3 ;
-(id)externalizedContext;
-(void)authMethodWithReply:(/*^block*/id)arg1 ;
-(id)createInternalInfoWithPolicy:(long long)arg1 policyOptions:(id)arg2 request:(id)arg3 originator:(id)arg4 ;
-(void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)contextOwner;
-(void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(Module *)module;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(/*^block*/id)arg6 ;
-(NSDate *)creationTime;
-(void)optionsForInternalOperation:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)credentialOfType:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)createInternalInfo:(id)arg1 skipCallerIdentification:(BOOL)arg2 callerBundleId:(id)arg3 request:(id)arg4 originator:(id)arg5 ;
-(void)setResultInfo:(NSDictionary *)arg1 ;
-(void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSDictionary *)resultInfo;
@end

