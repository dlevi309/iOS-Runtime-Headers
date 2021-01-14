/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface PKPeerPaymentRequestToken : NSObject <NSSecureCoding, NSCopying> {

	NSString* _requestToken;
	NSUUID* _deviceScoreIdentifier;

}

@property (nonatomic,copy,readonly) NSString * requestToken;                     //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceScoreIdentifier;              //@synthesize deviceScoreIdentifier=_deviceScoreIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)informalRequestToken;
-(NSString *)requestToken;
-(id)initWithRequestToken:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
-(BOOL)isEqualToPeerPaymentRequestToken:(id)arg1 ;
-(BOOL)isInformalRequestToken;
-(NSUUID *)deviceScoreIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

