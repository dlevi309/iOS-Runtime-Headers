/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/

#import <libobjc.A.dylib/LAContextExternalizationProt.h>
#import <libobjc.A.dylib/LAContextServerEvaluationProt.h>

@class NSMutableDictionary, NSDictionary, LACachedExternalizedContext, NSString;

@interface ContextPlugin : NSObject <LAContextExternalizationProt, LAContextServerEvaluationProt> {

	NSMutableDictionary* _internalOperationOptions;
	BOOL _contextOwner;
	unsigned _instanceId;
	NSDictionary* _resultInfo;
	LACachedExternalizedContext* _cachedExternalizedContext;

}

@property (nonatomic,readonly) BOOL contextOwner;                                                    //@synthesize contextOwner=_contextOwner - In the implementation block
@property (nonatomic,retain) NSDictionary * resultInfo;                                              //@synthesize resultInfo=_resultInfo - In the implementation block
@property (nonatomic,readonly) LACachedExternalizedContext * cachedExternalizedContext;              //@synthesize cachedExternalizedContext=_cachedExternalizedContext - In the implementation block
@property (nonatomic,readonly) unsigned instanceId;                                                  //@synthesize instanceId=_instanceId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)pluginWithExternalizedContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)externalizedContext;
-(BOOL)contextOwner;
-(unsigned)instanceId;
-(LACachedExternalizedContext *)cachedExternalizedContext;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(void)authMethodWithReply:(/*^block*/id)arg1 ;
-(id)externalizationObserver;
-(void)setExternalizationObserver:(id)arg1 ;
-(NSDictionary *)resultInfo;
-(void)setResultInfo:(NSDictionary *)arg1 ;
-(id)createInternalInfo:(id)arg1 skipCallerIdentification:(BOOL)arg2 callerBundleId:(id)arg3 originator:(id)arg4 ;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 request:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 type:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithContextOwner:(BOOL)arg1 ;
-(id)createInternalInfoWithPolicy:(long long)arg1 policyOptions:(id)arg2 originator:(id)arg3 ;
-(void)performOp:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

