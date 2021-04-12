/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXComponent, SXComponentLayout, SXComponentStyle, SXDOMObjectProviding;
#import <Silex/Silex-Structs.h>
@class SXLayoutOptions, NSMutableDictionary;

@interface SXComponentSizer : NSObject {

	id<SXComponent> _component;
	id<SXComponentLayout> _componentLayout;
	id<SXComponentStyle> _componentStyle;
	id<SXDOMObjectProviding> _DOMObjectProvider;
	SXLayoutOptions* _layoutOptions;
	NSMutableDictionary* _infoForRendering;
	CGSize _suggestedSize;

}

@property (assign,nonatomic) CGSize suggestedSize;                                      //@synthesize suggestedSize=_suggestedSize - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * infoForRendering;                  //@synthesize infoForRendering=_infoForRendering - In the implementation block
@property (nonatomic,readonly) id<SXComponent> component;                               //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) id<SXComponentLayout> componentLayout;                   //@synthesize componentLayout=_componentLayout - In the implementation block
@property (nonatomic,readonly) id<SXComponentStyle> componentStyle;                     //@synthesize componentStyle=_componentStyle - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;              //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;                         //@synthesize layoutOptions=_layoutOptions - In the implementation block
-(SXLayoutOptions *)layoutOptions;
-(id<SXComponent>)component;
-(id<SXComponentLayout>)componentLayout;
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id)snapLines;
-(void)setSuggestedSize:(CGSize)arg1 ;
-(UIEdgeInsets)contentInsetsWithUnitConverter:(id)arg1 ;
-(unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1 ;
-(unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1 ;
-(long long)minimumColumnLength;
-(NSRange)overrideColumnLayoutForColumnRange:(NSRange)arg1 inColumnLayout:(id)arg2 ;
-(BOOL)allowComponentIntersection;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 ;
-(UIEdgeInsets)layoutMarginsWithUnitConverter:(id)arg1 ;
-(UIEdgeInsets)bordersInsetsWithUnitConverter:(id)arg1 ;
-(id<SXComponentStyle>)componentStyle;
-(NSMutableDictionary *)infoForRendering;
-(void)saveInfo:(id)arg1 forRenderingPhaseWithIdentifier:(id)arg2 ;
-(CGSize)suggestedSize;
@end

