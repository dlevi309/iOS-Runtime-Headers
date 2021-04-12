/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isEqualToTransactionReceiptHeaderField:(id)arg1 ;
@end

