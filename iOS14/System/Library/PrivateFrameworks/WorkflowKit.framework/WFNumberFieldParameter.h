/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSString;

@interface WFNumberFieldParameter : WFParameter <WFModuleSummarySupporting, WFParameterDialogProvider> {

	BOOL _allowsDecimalNumbers;
	BOOL _allowsNegativeNumbers;
	long long _textAlignment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long textAlignment;                 //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) BOOL allowsDecimalNumbers;               //@synthesize allowsDecimalNumbers=_allowsDecimalNumbers - In the implementation block
@property (nonatomic,readonly) BOOL allowsNegativeNumbers;              //@synthesize allowsNegativeNumbers=_allowsNegativeNumbers - In the implementation block
+(BOOL)defaultAllowsNegativeNumbers;
+(BOOL)defaultAllowsDecimalNumbers;
-(id)moduleSummarySlotForState:(id)arg1 ;
-(id)defaultStateForNewArrayElement;
-(long long)textAlignment;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
-(BOOL)shouldAlignLabels;
-(BOOL)allowsDecimalNumbers;
-(BOOL)allowsNegativeNumbers;
@end

