/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXComponent, SXComponentLayout, SXComponentStyle, SXDOMObjectProviding, SXComponentState;
#import <Silex/Silex-Structs.h>
@class SXLayoutOptions, NSMutableDictionary;

@interface SXComponentSizer : NSObject {

	id<SXComponent> _component;
	id<SXComponentLayout> _componentLayout;
	id<SXComponentStyle> _componentStyle;
	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXComponentState> _componentState;
	SXLayoutOptions* _layoutOptions;
	NSMutableDictionary* _infoForRendering;
	CGSize _suggestedSize;

}

@property (assign,nonatomic) CGSize suggestedSize;                                      //@synthesize suggestedSize=_suggestedSize - In the implementation block
@property (nonatomic,retain) id<SXComponentState> componentState;                       //@synthesize componentState=_componentState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * infoForRendering;                  //@synthesize infoForRendering=_infoForRendering - In the implementation block
@property (nonatomic,readonly) id<SXComponent> component;                               //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) id<SXComponentLayout> componentLayout;                   //@synthesize componentLayout=_componentLayout - In the implementation block
@property (nonatomic,readonly) id<SXComponentStyle> componentStyle;                     //@synthesize componentStyle=_componentStyle - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;              //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;                         //@synthesize layoutOptions=_layoutOptions - In the implementation block
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(CGSize)suggestedSize;
-(id<SXComponent>)component;
-(SXLayoutOptions *)layoutOptions;
-(void)setComponentState:(id<SXComponentState>)arg1 ;
-(id<SXComponentState>)componentState;
-(id)snapLines;
-(void)setSuggestedSize:(CGSize)arg1 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 ;
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(NSRange)overrideColumnLayoutForColumnRange:(NSRange)arg1 inColumnLayout:(id)arg2 ;
-(unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1 ;
-(unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1 ;
-(BOOL)requiresSizeChangeForStateChange:(id)arg1 fromState:(id)arg2 ;
-(id<SXComponentLayout>)componentLayout;
-(long long)minimumColumnLength;
-(void)saveInfo:(id)arg1 forRenderingPhaseWithIdentifier:(id)arg2 ;
-(UIEdgeInsets)contentInsetsWithUnitConverter:(id)arg1 ;
-(BOOL)allowComponentIntersection;
-(UIEdgeInsets)layoutMarginsWithUnitConverter:(id)arg1 ;
-(UIEdgeInsets)bordersInsetsWithUnitConverter:(id)arg1 ;
-(id<SXComponentStyle>)componentStyle;
-(NSMutableDictionary *)infoForRendering;
@end

