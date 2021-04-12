/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKPaymentSetupFeature : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	long long _state;
	long long _supportedOptions;

}

@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long supportedOptions;              //@synthesize supportedOptions=_supportedOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentSetupFeatureWithProtobuf:(id)arg1 ;
-(long long)supportedOptions;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(id)protobuf;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setSupportedOptions:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

