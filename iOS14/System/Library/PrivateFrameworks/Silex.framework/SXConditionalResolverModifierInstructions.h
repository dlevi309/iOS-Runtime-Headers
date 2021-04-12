/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXConditionalResolverModifierInstructions.h>

@protocol SXConditionalResolverModifierInstructions <NSObject>
@property (nonatomic,readonly) BOOL shouldResolveAutoplacement; 
@property (nonatomic,readonly) BOOL shouldResolveComponents; 
@property (nonatomic,readonly) BOOL shouldResolveComponentLayouts; 
@property (nonatomic,readonly) BOOL shouldResolveComponentStyles; 
@property (nonatomic,readonly) BOOL shouldResolveComponentTextStyles; 
@property (nonatomic,readonly) BOOL shouldResolveDocumentStyle; 
@property (nonatomic,readonly) BOOL shouldResolveTextStyles; 
@required
-(BOOL)shouldResolveComponentStyles;
-(BOOL)shouldResolveTextStyles;
-(BOOL)shouldResolveAutoplacement;
-(BOOL)shouldResolveComponentTextStyles;
-(BOOL)shouldResolveComponents;
-(BOOL)shouldResolveDocumentStyle;
-(BOOL)shouldResolveComponentLayouts;

@end


@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;
@class NSString;

@interface SXConditionalResolverModifierInstructions : NSObject <SXConditionalResolverModifierInstructions> {

	id<SXDocumentProviding> _documentProvider;
	id<SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                                             //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;              //@synthesize hintsConfigurationOptionProvider=_hintsConfigurationOptionProvider - In the implementation block
@property (nonatomic,readonly) BOOL shouldResolveAutoplacement; 
@property (nonatomic,readonly) BOOL shouldResolveComponents; 
@property (nonatomic,readonly) BOOL shouldResolveComponentLayouts; 
@property (nonatomic,readonly) BOOL shouldResolveComponentStyles; 
@property (nonatomic,readonly) BOOL shouldResolveComponentTextStyles; 
@property (nonatomic,readonly) BOOL shouldResolveDocumentStyle; 
@property (nonatomic,readonly) BOOL shouldResolveTextStyles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(id)hints;
-(BOOL)shouldResolveComponentStyles;
-(BOOL)shouldResolveTextStyles;
-(BOOL)shouldResolveAutoplacement;
-(BOOL)shouldResolveComponentTextStyles;
-(id<SXHintsConfigurationOptionProvider>)hintsConfigurationOptionProvider;
-(BOOL)shouldResolveComponents;
-(id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2 ;
-(BOOL)shouldResolveDocumentStyle;
-(BOOL)shouldResolveComponentLayouts;
@end

