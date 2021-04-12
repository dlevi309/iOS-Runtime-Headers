/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentPreferencesResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentPreferences* _peerPaymentPreferences;

}

@property (nonatomic,readonly) PKPeerPaymentPreferences * peerPaymentPreferences;              //@synthesize peerPaymentPreferences=_peerPaymentPreferences - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPeerPaymentPreferences *)peerPaymentPreferences;
@end

