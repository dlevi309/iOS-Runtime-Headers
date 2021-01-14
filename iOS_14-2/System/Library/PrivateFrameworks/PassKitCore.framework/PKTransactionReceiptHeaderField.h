/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKTransactionReceiptHeaderField : NSObject <NSSecureCoding, NSCopying> {

	NSString* _key;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,copy) NSString * key;                //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToTransactionReceiptHeaderField:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
@end

