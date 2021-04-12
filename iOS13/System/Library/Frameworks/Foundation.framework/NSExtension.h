/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/_NSExtensionContextHosting.h>

@protocol PKPlugIn;
@class NSString, NSDictionary, NSBundle, NSMutableDictionary, NSSet, NSUUID, NSArray;

@interface NSExtension : NSObject <_NSExtensionContextHosting> {

	os_unfair_lock_s _unfairLock;
	BOOL _observingHostAppStateChanges;
	NSString* _identifier;
	NSString* _version;
	NSDictionary* _attributes;
	NSDictionary* _infoDictionary;
	NSString* _extensionPointIdentifier;
	/*^block*/id _requestCompletionBlock;
	/*^block*/id _requestCancellationBlock;
	/*^block*/id _requestInterruptionBlock;
	id __stashedPlugInConnection;
	id<PKPlugIn> __plugIn;
	NSBundle* __extensionBundle;
	NSString* __localizedName;
	NSString* __localizedShortName;
	/*^block*/id __requestPostCompletionBlock;
	/*^block*/id __requestPostCompletionBlockWithItems;
	NSMutableDictionary* __extensionExpirationIdentifiers;
	NSMutableDictionary* __extensionServiceConnections;
	NSMutableDictionary* __extensionContexts;
	NSSet* __allowedErrorClasses;
	NSUUID* _connectionUUID;

}

@property (getter=_isMarkedNew,nonatomic,readonly) BOOL _markedNew; 
@property (retain) id _stashedPlugInConnection;                                                                                                              //@synthesize _stashedPlugInConnection=__stashedPlugInConnection - In the implementation block
@property (setter=_setPlugIn:,nonatomic,retain) id<PKPlugIn> _plugIn;                                                                                        //@synthesize _plugIn=__plugIn - In the implementation block
@property (setter=_setExtensionBundle:,nonatomic,retain) NSBundle * _extensionBundle;                                                                        //@synthesize _extensionBundle=__extensionBundle - In the implementation block
@property (nonatomic,copy) NSString * _localizedName;                                                                                                        //@synthesize _localizedName=__localizedName - In the implementation block
@property (nonatomic,copy) NSString * _localizedShortName;                                                                                                   //@synthesize _localizedShortName=__localizedShortName - In the implementation block
@property (nonatomic,copy) id _requestPostCompletionBlock;                                                                                                   //@synthesize _requestPostCompletionBlock=__requestPostCompletionBlock - In the implementation block
@property (nonatomic,copy) id _requestPostCompletionBlockWithItems;                                                                                          //@synthesize _requestPostCompletionBlockWithItems=__requestPostCompletionBlockWithItems - In the implementation block
@property (setter=_setExtensionExpirationsIdentifiers:,nonatomic,retain) NSMutableDictionary * _extensionExpirationIdentifiers;                              //@synthesize _extensionExpirationIdentifiers=__extensionExpirationIdentifiers - In the implementation block
@property (setter=_setExtensionServiceConnections:,nonatomic,retain) NSMutableDictionary * _extensionServiceConnections;                                     //@synthesize _extensionServiceConnections=__extensionServiceConnections - In the implementation block
@property (setter=_setExtensionContexts:,nonatomic,retain) NSMutableDictionary * _extensionContexts;                                                         //@synthesize _extensionContexts=__extensionContexts - In the implementation block
@property (setter=_setExtensionState:,getter=_extensionState,nonatomic,copy) NSDictionary * _extensionState; 
@property (setter=_setAllowedErrorClasses:,nonatomic,copy) NSSet * _allowedErrorClasses;                                                                     //@synthesize _allowedErrorClasses=__allowedErrorClasses - In the implementation block
@property (assign,setter=_setObservingHostAppStateChanges:,getter=_isObservingHostAppStateChanges,nonatomic) BOOL observingHostAppStateChanges;              //@synthesize observingHostAppStateChanges=_observingHostAppStateChanges - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * version;                                                                                                               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                                                                                                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSDictionary * infoDictionary;                                                                                                    //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (nonatomic,copy) NSString * extensionPointIdentifier;                                                                                              //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSUUID * connectionUUID;                                                                                                          //@synthesize connectionUUID=_connectionUUID - In the implementation block
@property (nonatomic,readonly) BOOL optedIn; 
@property (nonatomic,copy) id requestCompletionBlock;                                                                                                        //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (nonatomic,copy) id requestCancellationBlock;                                                                                                      //@synthesize requestCancellationBlock=_requestCancellationBlock - In the implementation block
@property (nonatomic,copy) id requestInterruptionBlock;                                                                                                      //@synthesize requestInterruptionBlock=_requestInterruptionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)initializeFiltering;
+(void)extensionsWithMatchingAttributes:(id)arg1 synchronously:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(BOOL)arg2 error:(id*)arg3 ;
+(id)extensionsWithMatchingAttributes:(id)arg1 error:(id*)arg2 ;
+(BOOL)_shouldLogExtensionDiscovery;
+(void)extensionsWithMatchingAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)extensionWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(void)extensionWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)extensionWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)endMatchingExtensions:(id)arg1 ;
+(BOOL)_inputItemsMatchActiveWebPageAlternative:(id)arg1 ;
+(id)_inputItemsByApplyingActiveWebPageAlternative:(id)arg1 ifNeededByActivationRule:(id)arg2 ;
+(BOOL)_evaluateActivationRule:(id)arg1 withInputItemsIfTheyMatchActiveWebPageAlternative:(id)arg2 matchResult:(out long long*)arg3 ;
+(BOOL)_genericValuesMatchActiveWebPageAlternativeWithExtensionItems:(id)arg1 attachmentsLens:(/*^block*/id)arg2 registeredTypeIdentifiersLens:(/*^block*/id)arg3 isActiveWebPageAttachmentCheck:(/*^block*/id)arg4 ;
+(BOOL)_evaluateActivationRule:(id)arg1 withDictionaryIfItMatchesActiveWebPageAlternative:(id)arg2 matchResult:(out long long*)arg3 ;
+(BOOL)_matchingDictionaryMatchesActiveWebPageAlternative:(id)arg1 ;
+(BOOL)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2 ;
+(id)_dictionaryIncludingOnlyItemsWithRegisteredTypeIdentifier:(id)arg1 fromMatchingDictionary:(id)arg2 ;
+(BOOL)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2 ;
+(id)predicateForActivationRule:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSDictionary *)attributes;
-(NSDictionary *)infoDictionary;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(NSSet *)_allowedErrorClasses;
-(id)_extensionContextForUUID:(id)arg1 ;
-(NSMutableDictionary *)_extensionServiceConnections;
-(void)_setExtensionServiceConnections:(id)arg1 ;
-(NSMutableDictionary *)_extensionContexts;
-(void)_setExtensionContexts:(id)arg1 ;
-(void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)version;
-(id<PKPlugIn>)_plugIn;
-(NSDictionary *)_extensionState;
-(void)_setExtensionState:(id)arg1 ;
-(BOOL)_isMarkedNew;
-(void)_didShowExtensionManagementInterface;
-(void)_didShowNewExtensionIndicator;
-(void)_resetExtensionState;
-(void)setVersion:(NSString *)arg1 ;
-(id)_initWithPKPlugin:(id)arg1 ;
-(BOOL)_wantsProcessPerRequest;
-(NSBundle *)_extensionBundle;
-(id)_newExtensionContextAndGetConnection:(id*)arg1 assertion:(id)arg2 inputItems:(id)arg3 ;
-(void)_reallyBeginExtensionRequestWithContext:(id)arg1 extensionServiceConnection:(id)arg2 listenerEndpoint:(id)arg3 synchronously:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)_bareExtensionServiceConnection;
-(id)requestInterruptionBlock;
-(void)_didCreateExtensionContext:(id)arg1 ;
-(void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 error:(id*)arg4 ;
-(id)_inputItemsByApplyingActiveWebPageAlternativeIfNeeded:(id)arg1 ;
-(void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 processAssertion:(id)arg2 listenerEndpoint:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_safelyBeginUsingWithOptions:(unsigned long long)arg1 withAssertion_onSafeQueue:(/*^block*/id)arg2 ;
-(BOOL)_beginUsingAndCreateExtensionAssertion:(id*)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 error:(id*)arg3 ;
-(id)_requestPostCompletionBlock;
-(void)_hostWillEnterForegroundNote:(id)arg1 ;
-(void)_hostDidEnterBackgroundNote:(id)arg1 ;
-(void)_hostWillResignActiveNote:(id)arg1 ;
-(void)_hostDidBecomeActiveNote:(id)arg1 ;
-(id)requestCompletionBlock;
-(id)_requestPostCompletionBlockWithItems;
-(id)requestCancellationBlock;
-(id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2 ;
-(int)_plugInProcessIdentifier;
-(void)set_stashedPlugInConnection:(id)arg1 ;
-(void)_kill:(int)arg1 ;
-(void)_safelyBeginUsingSynchronously:(BOOL)arg1 options:(unsigned long long)arg2 withAssertion_onSafeQueue:(/*^block*/id)arg3 ;
-(void)_safelyEndUsingWithProcessAssertion:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(id)_stashedPlugInConnection;
-(id)extensionContexts;
-(BOOL)optedIn;
-(BOOL)attemptOptIn:(id*)arg1 ;
-(BOOL)attemptOptOut:(id*)arg1 ;
-(void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 error:(id*)arg3 ;
-(void)beginExtensionRequestWithInputItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)beginExtensionRequestWithInputItems:(id)arg1 error:(id*)arg2 ;
-(void)cancelExtensionRequestWithIdentifier:(id)arg1 ;
-(int)pidForRequestIdentifier:(id)arg1 ;
-(NSArray *)icons;
-(BOOL)_isPhotoServiceAccessGranted;
-(BOOL)_isSystemExtension;
-(void)_safelyBeginUsing:(/*^block*/id)arg1 ;
-(void)_safelyEndUsing:(/*^block*/id)arg1 ;
-(void)_dropAssertion;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(NSString *)extensionPointIdentifier;
-(void)setExtensionPointIdentifier:(NSString *)arg1 ;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(void)setRequestCancellationBlock:(id)arg1 ;
-(void)setRequestInterruptionBlock:(id)arg1 ;
-(void)_setPlugIn:(id)arg1 ;
-(void)_setExtensionBundle:(id)arg1 ;
-(NSString *)_localizedName;
-(void)set_localizedName:(NSString *)arg1 ;
-(NSString *)_localizedShortName;
-(void)set_localizedShortName:(NSString *)arg1 ;
-(void)set_requestPostCompletionBlock:(id)arg1 ;
-(void)set_requestPostCompletionBlockWithItems:(id)arg1 ;
-(NSMutableDictionary *)_extensionExpirationIdentifiers;
-(void)_setExtensionExpirationsIdentifiers:(id)arg1 ;
-(void)_setAllowedErrorClasses:(id)arg1 ;
-(BOOL)_isObservingHostAppStateChanges;
-(void)_setObservingHostAppStateChanges:(BOOL)arg1 ;
-(NSUUID *)connectionUUID;
-(void)setConnectionUUID:(NSUUID *)arg1 ;
@end

