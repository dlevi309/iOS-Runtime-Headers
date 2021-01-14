/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PKServiceProviderPurchaseData : NSObject <NSSecureCoding> {

	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,copy) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToPKServiceProviderPurchaseData:(id)arg1 ;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

