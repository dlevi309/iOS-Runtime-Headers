/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/


@protocol CNDonationAccountLogger <NSObject>
@required
-(void)accountRemoved:(id)arg1;
-(void)accountAdded:(id)arg1;
-(void)accountChanged:(id)arg1;
-(void)pluginLoaded;
-(void)pluginUnloaded;
-(void)accountsDidNotChange;
-(void)donating:(id)arg1;
-(void)removing:(id)arg1;
-(void)donationFailedWithError:(id)arg1;
-(void)removalFailedWithError:(id)arg1;

@end

