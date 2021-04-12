/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModifying.h>

@protocol SXConditionValidationContextFactory, SXConditionalResolverModifierInstructions;
@class SXConditionalObjectResolver, NSString;

@interface SXDOMConditionResolverModifier : NSObject <SXDOMModifying> {

	BOOL _hasCheckedInstructions;
	BOOL _resolveComponents;
	BOOL _resolveComponentStyles;
	BOOL _resolveComponentLayouts;
	BOOL _resolveComponentTextStyles;
	BOOL _resolveTextStyles;
	BOOL _resolveAutoplacement;
	BOOL _resolveDocumentStyle;
	id<SXConditionValidationContextFactory> _validationContextFactory;
	SXConditionalObjectResolver* _componentResolver;
	SXConditionalObjectResolver* _textStyleResolver;
	SXConditionalObjectResolver* _componentStyleResolver;
	SXConditionalObjectResolver* _componentLayoutResolver;
	SXConditionalObjectResolver* _componentTextStyleResolver;
	SXConditionalObjectResolver* _advertisementAutoPlacementResolver;
	SXConditionalObjectResolver* _suggestedArticlesAutoPlacementResolver;
	SXConditionalObjectResolver* _documentStyleResolver;
	id<SXConditionalResolverModifierInstructions> _instructions;

}

@property (nonatomic,readonly) id<SXConditionValidationContextFactory> validationContextFactory;                  //@synthesize validationContextFactory=_validationContextFactory - In the implementation block
@property (nonatomic,readonly) SXConditionalObjectResolver * componentResolver;                                   //@synthesize componentResolver=_componentResolver - In the implementation block
@property (nonatomic,readonly) SXConditionalObjectResolver * textStyleResolver;                                   //@synthesize textStyleResolver=_textStyleResolver - In the implementation block
@property (nonatomic,readonly) SXConditionalObjectResolver * componentStyleResolver;                              //@synthesize componentStyleResolver=_componentStyleResolver - In the implementation block
@property (nonatomic,readonly) SXConditionalObjectResolver * componentLayoutResolver;                             //@synthesize componentLayoutResolver=_componentLayoutResolver - In the implementation block
@property (nonatomic,readonly) SXConditionalObjectResolver * componentTextStyleResolver;                          //@synthesize componentTextStyleResolver=_componentTextStyleResolver - In the implementation block
@property (nonatomic,readonly) SXConditionalObjectResolver * advertisementAutoPlacementResolver;                  //@synthesize advertisementAutoPlacementResolver=_advertisementAutoPlacementResolver - In the implementation block
@property (nonatomic,readonly) SXConditionalObjectResolver * suggestedArticlesAutoPlacementResolver;              //@synthesize suggestedArticlesAutoPlacementResolver=_suggestedArticlesAutoPlacementResolver - In the implementation block
@property (nonatomic,readonly) SXConditionalObjectResolver * documentStyleResolver;                               //@synthesize documentStyleResolver=_documentStyleResolver - In the implementation block
@property (nonatomic,readonly) id<SXConditionalResolverModifierInstructions> instructions;                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) BOOL hasCheckedInstructions;                                                       //@synthesize hasCheckedInstructions=_hasCheckedInstructions - In the implementation block
@property (nonatomic,readonly) BOOL resolveComponents;                                                            //@synthesize resolveComponents=_resolveComponents - In the implementation block
@property (nonatomic,readonly) BOOL resolveComponentStyles;                                                       //@synthesize resolveComponentStyles=_resolveComponentStyles - In the implementation block
@property (nonatomic,readonly) BOOL resolveComponentLayouts;                                                      //@synthesize resolveComponentLayouts=_resolveComponentLayouts - In the implementation block
@property (nonatomic,readonly) BOOL resolveComponentTextStyles;                                                   //@synthesize resolveComponentTextStyles=_resolveComponentTextStyles - In the implementation block
@property (nonatomic,readonly) BOOL resolveTextStyles;                                                            //@synthesize resolveTextStyles=_resolveTextStyles - In the implementation block
@property (nonatomic,readonly) BOOL resolveAutoplacement;                                                         //@synthesize resolveAutoplacement=_resolveAutoplacement - In the implementation block
@property (nonatomic,readonly) BOOL resolveDocumentStyle;                                                         //@synthesize resolveDocumentStyle=_resolveDocumentStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXConditionalResolverModifierInstructions>)instructions;
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
-(id)initWithValidationContextFactory:(id)arg1 componentResolver:(id)arg2 textStyleResolver:(id)arg3 componentStyleResolver:(id)arg4 componentLayoutResolver:(id)arg5 componentTextStyleResolver:(id)arg6 advertisementAutoPlacementResolver:(id)arg7 suggestedArticlesAutoPlacementResolver:(id)arg8 documentStyleResolver:(id)arg9 instructions:(id)arg10 ;
-(id<SXConditionValidationContextFactory>)validationContextFactory;
-(BOOL)resolveComponents:(id)arg1 validationContext:(id)arg2 ;
-(BOOL)resolveTextStyles:(id)arg1 validationContext:(id)arg2 ;
-(BOOL)resolveComponentLayouts:(id)arg1 validationContext:(id)arg2 ;
-(BOOL)resolveComponentStyles:(id)arg1 validationContext:(id)arg2 ;
-(BOOL)resolveComponentTextStyle:(id)arg1 validationContext:(id)arg2 ;
-(id)resolveAutoPlacement:(id)arg1 validationContext:(id)arg2 ;
-(id)resolveDocumentStyle:(id)arg1 validationContext:(id)arg2 ;
-(SXConditionalObjectResolver *)componentResolver;
-(SXConditionalObjectResolver *)textStyleResolver;
-(SXConditionalObjectResolver *)componentStyleResolver;
-(SXConditionalObjectResolver *)componentLayoutResolver;
-(SXConditionalObjectResolver *)componentTextStyleResolver;
-(SXConditionalObjectResolver *)advertisementAutoPlacementResolver;
-(SXConditionalObjectResolver *)suggestedArticlesAutoPlacementResolver;
-(SXConditionalObjectResolver *)documentStyleResolver;
-(BOOL)hasCheckedInstructions;
-(BOOL)resolveComponents;
-(BOOL)resolveComponentStyles;
-(BOOL)resolveComponentLayouts;
-(BOOL)resolveComponentTextStyles;
-(BOOL)resolveTextStyles;
-(BOOL)resolveAutoplacement;
-(BOOL)resolveDocumentStyle;
@end

