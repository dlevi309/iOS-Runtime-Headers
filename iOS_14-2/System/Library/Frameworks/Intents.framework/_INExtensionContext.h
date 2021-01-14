/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/INIntentDelivererDelegate.h>
#import <libobjc.A.dylib/INIntentDelivererDataSource.h>
#import <libobjc.A.dylib/_INExtensionContextVending.h>

@protocol OS_dispatch_queue, INIntentHandlerProvidingPrivate;
@class NSObject, INIntentDeliverer, NSString;

@interface _INExtensionContext : NSExtensionContext <INIntentDelivererDelegate, INIntentDelivererDataSource, _INExtensionContextVending> {

	BOOL _isPrivateExtension;
	id _handlerForIntent;
	NSObject*<OS_dispatch_queue> _queue;
	id<INIntentHandlerProvidingPrivate> _extensionHandler;
	INIntentDeliverer* _intentDeliverer;

}

@property (nonatomic,readonly) id<INIntentHandlerProvidingPrivate> _extensionHandler;              //@synthesize extensionHandler=_extensionHandler - In the implementation block
@property (nonatomic,readonly) INIntentDeliverer * _intentDeliverer;                               //@synthesize intentDeliverer=_intentDeliverer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(oneway void)completeTransaction;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2 ;
-(oneway void)stopSendingUpdatesForIntent:(id)arg1 ;
-(oneway void)handleIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)confirmationResponseForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)cancelTransactionDueToTimeout;
-(oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 searchTerm:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(oneway void)confirmIntent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)handleIntent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_commonInit;
-(id<INIntentHandlerProvidingPrivate>)_extensionHandler;
-(INIntentDeliverer *)_intentDeliverer;
-(void)_validateExtension;
-(SCD_Struct_IN2)auditTokenForIntentDeliverer:(id)arg1 ;
-(void)intentDeliverer:(id)arg1 deliverIntent:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithInputItems:(id)arg1 extension:(id)arg2 ;
-(id)initWithInputItems:(id)arg1 privateIntentHandlerProvider:(id)arg2 ;
-(void)_beginTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

