/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentStatusResponse.h>

@class NSUUID;

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse {

	NSUUID* _deviceScoreIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * deviceScoreIdentifier;              //@synthesize deviceScoreIdentifier=_deviceScoreIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)deviceScoreIdentifier;
-(id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

