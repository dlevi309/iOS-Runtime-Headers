/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@interface WFNumberFieldParameter : WFParameter {

	BOOL _allowsDecimalNumbers;
	BOOL _allowsNegativeNumbers;
	long long _textAlignment;

}

@property (nonatomic,readonly) long long textAlignment;                 //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) BOOL allowsDecimalNumbers;               //@synthesize allowsDecimalNumbers=_allowsDecimalNumbers - In the implementation block
@property (nonatomic,readonly) BOOL allowsNegativeNumbers;              //@synthesize allowsNegativeNumbers=_allowsNegativeNumbers - In the implementation block
+(BOOL)defaultAllowsNegativeNumbers;
+(BOOL)defaultAllowsDecimalNumbers;
-(id)initWithDefinition:(id)arg1 ;
-(long long)textAlignment;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(BOOL)shouldAlignLabels;
-(BOOL)allowsDecimalNumbers;
-(BOOL)allowsNegativeNumbers;
@end

