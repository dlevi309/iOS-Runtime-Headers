/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)value;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqualToLabeledValue:(id)arg1 ;
@end

