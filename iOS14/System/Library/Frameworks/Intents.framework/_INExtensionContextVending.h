/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol _INExtensionContextVending <NSObject>
@optional
-(oneway void)completeTransaction;
-(oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
-(oneway void)stopSendingUpdatesForIntent:(id)arg1;
-(oneway void)handleIntent:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)confirmationResponseForIntent:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)cancelTransactionDueToTimeout;
-(oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;

@required
-(oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 searchTerm:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(oneway void)confirmIntent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)handleIntent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

