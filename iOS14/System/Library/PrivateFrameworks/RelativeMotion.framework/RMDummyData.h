/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/

#import <RelativeMotion/RelativeMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RMDummyData : NSObject <NSSecureCoding> {

	SCD_Struct_RM0 _payload;

}

@property (nonatomic,readonly) SCD_Struct_RM0 payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPayload:(SCD_Struct_RM0)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_RM0)payload;
-(id)initWithCoder:(id)arg1 ;
@end

