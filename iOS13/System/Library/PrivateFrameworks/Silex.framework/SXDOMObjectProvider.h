/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMObjectProviding.h>

@protocol SXDocumentControllerProvider;
@class SXComponents, SXDOM, SXJSONObjectMerger, NSString;

@interface SXDOMObjectProvider : NSObject <SXDOMObjectProviding> {

	SXDOM* _DOM;
	id<SXDocumentControllerProvider> _documentControllerProvider;
	SXJSONObjectMerger* _componentStyleMerger;
	SXJSONObjectMerger* _componentTextStyleMerger;

}

@property (nonatomic,readonly) id<SXDocumentControllerProvider> documentControllerProvider;              //@synthesize documentControllerProvider=_documentControllerProvider - In the implementation block
@property (nonatomic,readonly) SXJSONObjectMerger * componentStyleMerger;                                //@synthesize componentStyleMerger=_componentStyleMerger - In the implementation block
@property (nonatomic,readonly) SXJSONObjectMerger * componentTextStyleMerger;                            //@synthesize componentTextStyleMerger=_componentTextStyleMerger - In the implementation block
@property (nonatomic,retain) SXDOM * DOM;                                                                //@synthesize DOM=_DOM - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXDocumentStyle> documentStyle; 
@property (nonatomic,readonly) SXComponents * components; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement; 
-(SXComponents *)components;
-(id)componentLayoutForIdentifier:(id)arg1 ;
-(id)componentStyleForIdentifier:(id)arg1 ;
-(id)componentStyleForComponent:(id)arg1 ;
-(id)componentStyleForIdentifiers:(id)arg1 ;
-(id)textStyleForIdentifier:(id)arg1 ;
-(id)componentTextStyleForIdentifiers:(id)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg1 classification:(id)arg2 ;
-(id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2 ;
-(id)resourceForIdentifier:(id)arg1 ;
-(id)imageResourceForIdentifier:(id)arg1 ;
-(id<SXDocumentStyle>)documentStyle;
-(id<SXAutoPlacement>)autoPlacement;
-(void)setDOM:(SXDOM *)arg1 ;
-(id)initWithDocumentControllerProvider:(id)arg1 componentStyleMerger:(id)arg2 componentTextStyleMerger:(id)arg3 ;
-(SXDOM *)DOM;
-(id<SXDocumentControllerProvider>)documentControllerProvider;
-(SXJSONObjectMerger *)componentStyleMerger;
-(SXJSONObjectMerger *)componentTextStyleMerger;
@end

