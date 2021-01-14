/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accessibility.framework/Accessibility
*/

#import <Accessibility/Accessibility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString;

@interface AXCustomContent : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _importance;
	NSString* _label;
	NSAttributedString* _attributedLabel;
	NSString* _value;
	NSAttributedString* _attributedValue;

}

@property (nonatomic,copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedLabel;              //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (nonatomic,copy) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedValue;              //@synthesize attributedValue=_attributedValue - In the implementation block
@property (assign,nonatomic) unsigned long long importance;                   //@synthesize importance=_importance - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)customContentWithLabel:(id)arg1 value:(id)arg2 ;
+(id)customContentWithAttributedLabel:(id)arg1 attributedValue:(id)arg2 ;
-(void)setAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAttributedValue:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedLabel;
-(NSAttributedString *)attributedValue;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)importance;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImportance:(unsigned long long)arg1 ;
@end

