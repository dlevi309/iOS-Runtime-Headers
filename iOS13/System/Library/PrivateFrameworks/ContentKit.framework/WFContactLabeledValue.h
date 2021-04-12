/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSString;

@interface WFContactLabeledValue : NSObject {

	NSString* _label;
	id _value;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) id value;                      //@synthesize value=_value - In the implementation block
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)localizedStringForLabel:(id)arg1 ;
-(id)description;
-(id)value;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
@end

