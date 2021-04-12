/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class WFContentProperty, NSString;

@interface WFVariableConfigurationProperty : NSObject {

	BOOL _negativeProperty;
	WFContentProperty* _contentProperty;
	NSString* _label;

}

@property (nonatomic,readonly) WFContentProperty * contentProperty;              //@synthesize contentProperty=_contentProperty - In the implementation block
@property (nonatomic,readonly) BOOL negativeProperty;                            //@synthesize negativeProperty=_negativeProperty - In the implementation block
@property (nonatomic,readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
-(id)initWithLabel:(id)arg1 ;
-(NSString *)label;
-(BOOL)negativeProperty;
-(WFContentProperty *)contentProperty;
-(id)initWithContentProperty:(id)arg1 negativeProperty:(BOOL)arg2 ;
@end

