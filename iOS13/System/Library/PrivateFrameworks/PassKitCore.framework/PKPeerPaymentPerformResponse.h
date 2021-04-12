/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentStatusResponse.h>

@class NSUUID;

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse {

	NSUUID* _deviceScoreIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * deviceScoreIdentifier;              //@synthesize deviceScoreIdentifier=_deviceScoreIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSUUID *)deviceScoreIdentifier;
-(id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
@end

