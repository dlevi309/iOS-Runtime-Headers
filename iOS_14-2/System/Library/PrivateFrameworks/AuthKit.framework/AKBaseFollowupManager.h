/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKFollowUpItemFactory, AKFollowUpProvider;
@interface AKBaseFollowupManager : NSObject {

	id<AKFollowUpItemFactory> _factory;
	id<AKFollowUpProvider> _provider;

}
-(id)_alignedInsertionCandidates:(id)arg1 withExistingItems:(id)arg2 ;
-(id)initWithFollowUpFactory:(id)arg1 provider:(id)arg2 ;
-(BOOL)synchronizeFollowUpsWithServerPayload:(id)arg1 altDSID:(id)arg2 error:(id*)arg3 ;
-(void)teardownFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

