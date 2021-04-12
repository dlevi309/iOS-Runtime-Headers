/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REDonatedActionStoreObserver <NSObject>
@optional
-(void)donationActionStoreWillBeginLoadingData;
-(void)donationActionStoreDidFinishLoadingData;
-(void)donationActionStoreRemovedDonation:(id)arg1;
-(void)donationActionStoreRemovedDonationsFor:(id)arg1;
-(void)donationActionStoreRemoveAllDonations;

@required
-(void)donationActionStoreReceivedDonation:(id)arg1 isNewDonation:(BOOL)arg2;

@end

