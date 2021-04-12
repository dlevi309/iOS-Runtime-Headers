/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPaymentSummaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _detail;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shippingMethodWithProtobuf:(id)arg1 ;
+(long long)version;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)detail;
-(void)encodeWithCoder:(id)arg1 ;
-(id)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqualToShippingMethod:(id)arg1 ;
-(id)formattedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

