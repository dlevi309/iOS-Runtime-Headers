/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/


@protocol CKPermanentWritableEventStore
@required
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
-(void)recordEvent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
-(void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)recordEvent:(id)arg1 error:(id*)arg2;
-(BOOL)recordInteraction:(id)arg1 error:(id*)arg2;
-(void)recordInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

