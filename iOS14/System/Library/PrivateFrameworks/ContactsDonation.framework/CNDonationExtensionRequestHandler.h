/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

