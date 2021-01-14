/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol NSFileAccessArbiterXPCInterface <NSFileAccessArbiter>
@required
-(oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2;
-(void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 ubiquityAttributes:(id)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7;
-(void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(/*^block*/id)arg7;
-(void)provideSubarbiterDebugInfoIncludingEverything:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)removePresenterWithID:(id)arg1;
-(void)startArbitratingWithReply:(/*^block*/id)arg1;
-(void)grantAccessClaim:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)performBarrierWithCompletionHandler:(/*^block*/id)arg1;
-(void)getItemHasPresentersAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)prepareToArbitrateForURLs:(id)arg1;
-(oneway void)revokeAccessClaimForID:(id)arg1;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(/*^block*/id)arg3;

@end

