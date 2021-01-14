/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSString;

@interface WFTextInputParameter : WFParameter <WFModuleSummarySupporting, WFParameterDialogProvider> {

	BOOL _secureTextEntry;
	BOOL _smartQuotesDisabled;
	BOOL _smartDashesDisabled;
	BOOL _multiline;
	BOOL _processesIntoContentItems;
	NSString* _textContentType;
	NSString* _prefix;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _textAlignment;
	unsigned long long _hintDisplayMode;
	unsigned long long _syntaxHighlightingType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * prefix;                                              //@synthesize prefix=_prefix - In the implementation block
@property (getter=isSecureTextEntry,nonatomic,readonly) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy,readonly) NSString * textContentType;                            //@synthesize textContentType=_textContentType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;                           //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                               //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) BOOL smartQuotesDisabled;                                   //@synthesize smartQuotesDisabled=_smartQuotesDisabled - In the implementation block
@property (nonatomic,readonly) BOOL smartDashesDisabled;                                   //@synthesize smartDashesDisabled=_smartDashesDisabled - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (getter=isMultiline,nonatomic,readonly) BOOL multiline;                          //@synthesize multiline=_multiline - In the implementation block
@property (nonatomic,readonly) unsigned long long hintDisplayMode;                         //@synthesize hintDisplayMode=_hintDisplayMode - In the implementation block
@property (nonatomic,readonly) unsigned long long syntaxHighlightingType;                  //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
@property (nonatomic,readonly) BOOL processesIntoContentItems;                             //@synthesize processesIntoContentItems=_processesIntoContentItems - In the implementation block
-(id)moduleSummarySlotForState:(id)arg1 ;
-(id)defaultStateForNewArrayElement;
-(id)moduleSummaryAskVariableName;
-(long long)autocapitalizationType;
-(long long)keyboardType;
-(NSString *)prefix;
-(long long)autocorrectionType;
-(NSString *)textContentType;
-(BOOL)isSecureTextEntry;
-(long long)textAlignment;
-(void)setPrefix:(NSString *)arg1 ;
-(BOOL)isMultiline;
-(void)setLocalizedPlaceholder:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(BOOL)shouldAlignLabels;
-(id)hintForState:(id)arg1 ;
-(id)createDialogTextFieldConfigurationWithDefaultState:(id)arg1 ;
-(BOOL)smartQuotesDisabled;
-(BOOL)smartDashesDisabled;
-(unsigned long long)hintDisplayMode;
-(unsigned long long)syntaxHighlightingType;
-(BOOL)processesIntoContentItems;
@end

