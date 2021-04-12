/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)protobuf;
-(long long)supportedOptions;
-(void)setSupportedOptions:(long long)arg1 ;
@end

