/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
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
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(BOOL)negativeProperty;
-(WFContentProperty *)contentProperty;
-(id)initWithContentProperty:(id)arg1 negativeProperty:(BOOL)arg2 ;
@end

