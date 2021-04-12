/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/INIntentParameterOptionsProviding.h>
#import <libobjc.A.dylib/_INExtensionContextVending.h>

@protocol OS_dispatch_queue, INIntentHandlerProvidingPrivate;
@class NSObject, NSString;

@interface _INExtensionContext : NSExtensionContext <INIntentParameterOptionsProviding, _INExtensionContextVending> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isPrivateExtension;
	id _handlerForIntent;
	id<INIntentHandlerProvidingPrivate> _extensionHandler;
	id _activeHandlerForIntent;

}

@property (nonatomic,retain) id activeHandlerForIntent;                                            //@synthesize activeHandlerForIntent=_activeHandlerForIntent - In the implementation block
@property (nonatomic,readonly) id<INIntentHandlerProvidingPrivate> _extensionHandler;              //@synthesize extensionHandler=_extensionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(oneway void)completeTransaction;
-(oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(oneway void)stopSendingUpdatesForIntent:(id)arg1 ;
-(oneway void)confirmationResponseForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)cancelTransactionDueToTimeout;
-(oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)confirmIntent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<INIntentHandlerProvidingPrivate>)_extensionHandler;
-(void)getParameterOptionsForParameterNamed:(id)arg1 intent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getSupportsParameterOptionsForParameterNamed:(id)arg1 intent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithInputItems:(id)arg1 privateIntentHandlerProvider:(id)arg2 ;
-(id)initWithInputItems:(id)arg1 extension:(id)arg2 ;
-(void)_resolveIntentSlot:(id)arg1 forIntent:(id)arg2 intentHandler:(id)arg3 updateIntent:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)_invokeIntentHandlerMethodForIntent:(id)arg1 intentHandler:(id)arg2 parameterNamed:(id)arg3 keyForSelectors:(id)arg4 executionHandler:(/*^block*/id)arg5 unimplementedHandler:(/*^block*/id)arg6 ;
-(/*^block*/id)_processIntentResponseCompletionHandlerWithCompletion:(/*^block*/id)arg1 ;
-(/*^block*/id)_processResolutionDataProviderForIntent:(id)arg1 intentSlotDescription:(id)arg2 updateIntent:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(/*^block*/id)_processOptionsForIntent:(id)arg1 parameterNamed:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_processDefaultValue:(id)arg1 forIntent:(id)arg2 parameterNamed:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_updateIntent:(id)arg1 intentSlotDescription:(id)arg2 resolutionResultDataProvider:(id)arg3 ;
-(void)_processIntentResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deliverIntent:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_validateExtension;
-(void)_startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(void)_stopSendingUpdatesForIntent:(id)arg1 ;
-(void)_beginTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)activeHandlerForIntent;
-(void)setActiveHandlerForIntent:(id)arg1 ;
@end

