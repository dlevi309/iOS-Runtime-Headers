/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

