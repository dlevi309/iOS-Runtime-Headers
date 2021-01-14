/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

