/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest {

	PKPeerPaymentPreferences* _peerPaymentPreferences;

}

@property (nonatomic,retain) PKPeerPaymentPreferences * peerPaymentPreferences;              //@synthesize peerPaymentPreferences=_peerPaymentPreferences - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(PKPeerPaymentPreferences *)peerPaymentPreferences;
-(id)initWithPeerPaymentPreferences:(id)arg1 ;
-(void)setPeerPaymentPreferences:(PKPeerPaymentPreferences *)arg1 ;
@end

