/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)hostContext;
-(CNDonationExtensionRequestHandler *)requestHandler;
-(void)setRequestHandler:(CNDonationExtensionRequestHandler *)arg1 ;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
@end

