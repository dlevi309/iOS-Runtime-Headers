/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFHandleIntentAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFDynamicResolveParameterDataSource.h>
#import <libobjc.A.dylib/WFIntentDynamicResolverDataSource.h>

@class NSString, INSchema, WFIntentDynamicResolver, WFIntentDynamicResolutionRequest;

@interface WFHandleCustomIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource, WFDynamicResolveParameterDataSource, WFIntentDynamicResolverDataSource> {

	NSString* _appIdentifier;
	long long _intentCategory;
	NSString* _localizedName;
	NSString* _className;
	NSString* _bundleIdentifier;
	INSchema* _schema;
	WFIntentDynamicResolver* _dynamicResolver;
	WFIntentDynamicResolutionRequest* _lastDynamicResolutionRequest;

}

@property (nonatomic,copy,readonly) NSString * className;                                                  //@synthesize className=_className - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) INSchema * schema;                                                     //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy,readonly) NSString * appIdentifier;                                              //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) WFIntentDynamicResolver * dynamicResolver;                                  //@synthesize dynamicResolver=_dynamicResolver - In the implementation block
@property (nonatomic,retain) WFIntentDynamicResolutionRequest * lastDynamicResolutionRequest;              //@synthesize lastDynamicResolutionRequest=_lastDynamicResolutionRequest - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                                       //@synthesize localizedName=_localizedName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(INSchema *)schema;
-(NSString *)className;
-(NSString *)appIdentifier;
-(void)setLocalizedName:(NSString *)arg1 ;
-(long long)intentCategory;
-(id)intentDescription;
-(id)codableDescription;
-(void)initializeParameters;
-(void)parameterDefaultSerializedRepresentationDidChange:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)generatedIntentWithInput:(id)arg1 error:(id*)arg2 ;
-(id)slots;
-(void)startExecutingIntent:(id)arg1 ;
-(BOOL)populatesInputFromInputParameter;
-(id)localizedKeyParameterDisplayName;
-(id)copyWithSerializedParameters:(id)arg1 ;
-(id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2 ;
-(id)parameterKeysIgnoredForParameterSummary;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(BOOL)enumerationAllowsMultipleValues:(id)arg1 ;
-(void)generateSkeletonIntentForDynamicResolver:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)resolveOptionsForUserInput:(id)arg1 forDynamicResolveParameter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 dynamicResolveParameter:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 schema:(id)arg4 className:(id)arg5 bundleIdentifier:(id)arg6 ;
-(id)parametersByIntentSlotName;
-(void)setupParameter:(id)arg1 ;
-(id)prettyErrorForIntentsExtensionError:(id)arg1 ;
-(void)setUpResolverIfNeededForParameter:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dynamicResolveParameterDidEndResolutionSession:(id)arg1 ;
-(WFIntentDynamicResolver *)dynamicResolver;
-(WFIntentDynamicResolutionRequest *)lastDynamicResolutionRequest;
-(void)setLastDynamicResolutionRequest:(WFIntentDynamicResolutionRequest *)arg1 ;
@end

