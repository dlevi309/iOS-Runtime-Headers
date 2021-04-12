/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) SXDOM * DOM;                                      //@synthesize DOM=_DOM - In the implementation block
@property (nonatomic,readonly) id<SXDocumentStyle> documentStyle; 
@property (nonatomic,readonly) SXComponents * components; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)componentStyleForIdentifiers:(id)arg1 ;
-(SXComponents *)components;
-(id)imageResourceForIdentifier:(id)arg1 ;
-(id)textStyleForIdentifier:(id)arg1 component:(id)arg2 ;
-(void)setDOM:(SXDOM *)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg1 classification:(id)arg2 component:(id)arg3 ;
-(id)resourceForIdentifier:(id)arg1 ;
-(id)componentTextStyleForIdentifiers:(id)arg1 component:(id)arg2 ;
-(id)initWithDocumentControllerProvider:(id)arg1 componentStyleMerger:(id)arg2 componentTextStyleMerger:(id)arg3 ;
-(id)componentTextStyleForIdentifier:(id)arg1 component:(id)arg2 ;
-(id)componentStyleForComponent:(id)arg1 ;
-(id)componentLayoutForIdentifier:(id)arg1 ;
-(id<SXDocumentStyle>)documentStyle;
-(id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2 component:(id)arg3 ;
-(id<SXAutoPlacement>)autoPlacement;
-(SXDOM *)DOM;
@end

