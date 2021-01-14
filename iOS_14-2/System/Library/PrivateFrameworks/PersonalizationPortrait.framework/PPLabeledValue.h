/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSString, NSObject;

@interface PPLabeledValue : NSObject <NSSecureCoding, NSCopying> {

	NSString* _label;
	NSObject*<NSCopying>*<NSSecureCoding> _value;

}

@property (nonatomic,readonly) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSObject*<NSCopying>*<NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToLabeledValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSObject*<NSCopying>*<NSSecureCoding>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

