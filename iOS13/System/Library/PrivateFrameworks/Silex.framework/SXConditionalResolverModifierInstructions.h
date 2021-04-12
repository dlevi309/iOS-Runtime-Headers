/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)shouldResolveAutoplacement;
-(BOOL)shouldResolveComponents;
-(BOOL)shouldResolveComponentLayouts;
-(BOOL)shouldResolveComponentStyles;
-(BOOL)shouldResolveComponentTextStyles;
-(BOOL)shouldResolveDocumentStyle;
-(BOOL)shouldResolveTextStyles;

@end


@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;
@class NSString;

@interface SXConditionalResolverModifierInstructions : NSObject <SXConditionalResolverModifierInstructions> {

	id<SXDocumentProviding> _documentProvider;
	id<SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                                             //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;              //@synthesize hintsConfigurationOptionProvider=_hintsConfigurationOptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldResolveAutoplacement; 
@property (nonatomic,readonly) BOOL shouldResolveComponents; 
@property (nonatomic,readonly) BOOL shouldResolveComponentLayouts; 
@property (nonatomic,readonly) BOOL shouldResolveComponentStyles; 
@property (nonatomic,readonly) BOOL shouldResolveComponentTextStyles; 
@property (nonatomic,readonly) BOOL shouldResolveDocumentStyle; 
@property (nonatomic,readonly) BOOL shouldResolveTextStyles; 
-(id)hints;
-(id<SXDocumentProviding>)documentProvider;
-(BOOL)shouldResolveAutoplacement;
-(BOOL)shouldResolveComponents;
-(BOOL)shouldResolveComponentLayouts;
-(BOOL)shouldResolveComponentStyles;
-(BOOL)shouldResolveComponentTextStyles;
-(BOOL)shouldResolveDocumentStyle;
-(BOOL)shouldResolveTextStyles;
-(id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2 ;
-(id<SXHintsConfigurationOptionProvider>)hintsConfigurationOptionProvider;
@end

