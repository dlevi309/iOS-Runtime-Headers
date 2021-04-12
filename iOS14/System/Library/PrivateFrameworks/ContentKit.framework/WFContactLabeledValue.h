/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSString;

@interface WFContactLabeledValue : NSObject {

	NSString* _label;
	id _value;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) id value;                      //@synthesize value=_value - In the implementation block
+(id)localizedStringForLabel:(id)arg1 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(id)description;
-(NSString *)label;
-(id)value;
@end

