/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface CNDonationExtensionRequestHandler : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)userDidRejectDonatedValue:(id)arg1 ;
-(unsigned long long)donationVersioningNumber;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
@end

