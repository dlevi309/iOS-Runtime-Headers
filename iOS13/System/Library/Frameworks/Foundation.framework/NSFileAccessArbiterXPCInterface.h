/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol NSFileAccessArbiterXPCInterface <NSFileAccessArbiter>
@required
-(oneway void)revokeAccessClaimForID:(id)arg1;
-(oneway void)removePresenterWithID:(id)arg1;
-(oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2;
-(void)provideSubarbiterDebugInfoIncludingEverything:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)grantAccessClaim:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 ubiquityAttributes:(id)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7;
-(void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(/*^block*/id)arg7;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)prepareToArbitrateForURLs:(id)arg1;
-(void)startArbitratingWithReply:(/*^block*/id)arg1;
-(void)getItemHasPresentersAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performBarrierWithCompletionHandler:(/*^block*/id)arg1;

@end

