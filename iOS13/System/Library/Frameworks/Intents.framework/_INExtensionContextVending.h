/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol _INExtensionContextVending <NSObject>
@optional
-(oneway void)completeTransaction;
-(oneway void)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
-(oneway void)stopSendingUpdatesForIntent:(id)arg1;
-(oneway void)confirmationResponseForIntent:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)cancelTransactionDueToTimeout;

@required
-(oneway void)getIntentParameterOptions:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)getIntentParameterDefaultValue:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)resolveIntentSlots:(id)arg1 forIntent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)confirmIntent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)handleIntent:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)beginTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

