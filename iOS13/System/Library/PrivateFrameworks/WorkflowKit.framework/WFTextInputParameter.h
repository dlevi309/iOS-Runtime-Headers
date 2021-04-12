/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFTextInputParameter : WFParameter {

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
-(long long)keyboardType;
-(id)initWithDefinition:(id)arg1 ;
-(NSString *)prefix;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(BOOL)isSecureTextEntry;
-(NSString *)textContentType;
-(long long)textAlignment;
-(void)setPrefix:(NSString *)arg1 ;
-(BOOL)isMultiline;
-(void)setLocalizedPlaceholder:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)defaultSerializedRepresentation;
-(BOOL)shouldAlignLabels;
-(BOOL)processesIntoContentItems;
-(id)hintForState:(id)arg1 ;
-(BOOL)smartQuotesDisabled;
-(BOOL)smartDashesDisabled;
-(unsigned long long)hintDisplayMode;
-(unsigned long long)syntaxHighlightingType;
@end

