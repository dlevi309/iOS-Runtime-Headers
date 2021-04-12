/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/


@protocol CNDonationAccountLogger <NSObject>
@required
-(void)accountAdded:(id)arg1;
-(void)accountRemoved:(id)arg1;
-(void)accountChanged:(id)arg1;
-(void)pluginLoaded;
-(void)pluginUnloaded;
-(void)accountsDidNotChange;
-(void)donating:(id)arg1;
-(void)removing:(id)arg1;
-(void)donationFailedWithError:(id)arg1;
-(void)removalFailedWithError:(id)arg1;

@end

