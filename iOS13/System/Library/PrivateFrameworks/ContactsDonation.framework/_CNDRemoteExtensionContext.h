/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <ContactsDonation/_CNDExtensionContext.h>
#import <libobjc.A.dylib/_CNDRemoteExtensionContextProtocol.h>

@class CNDonationExtensionRequestHandler, NSString;

@interface _CNDRemoteExtensionContext : _CNDExtensionContext <_CNDRemoteExtensionContextProtocol> {

	CNDonationExtensionRequestHandler* _requestHandler;

}

@property (nonatomic,retain) CNDonationExtensionRequestHandler * requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNDonationExtensionRequestHandler *)requestHandler;
-(void)setRequestHandler:(CNDonationExtensionRequestHandler *)arg1 ;
-(id)hostContext;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
@end

