/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SXComponent, SXComponentState, SXComponentLayout;
@class SXComponentSizer, SXLayoutBlueprint, NSDictionary;

@interface SXComponentBlueprint : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasValidSize;
	BOOL _hasValidPosition;
	BOOL _hidden;
	id<SXComponent> _component;
	id<SXComponentState> _componentState;
	SXComponentSizer* _componentSizer;
	id<SXComponentLayout> _componentLayout;
	SXLayoutBlueprint* _parentLayoutBlueprint;
	NSDictionary* _infoFromLayouting;
	NSRange _columnRange;
	CGSize _suggestedSizeAfterInvalidation;
	CGRect _frame;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _layoutMargins;
	UIEdgeInsets _borderInsets;
	CGRect _absoluteFrame;
	CGRect _componentViewFrame;
	CGRect _contentViewFrame;
	CGRect _contentFrame;
	CGRect _backgroundViewFrame;

}

@property (assign,nonatomic,__weak) SXLayoutBlueprint * parentLayoutBlueprint;              //@synthesize parentLayoutBlueprint=_parentLayoutBlueprint - In the implementation block
@property (assign,nonatomic) CGSize suggestedSizeAfterInvalidation;                         //@synthesize suggestedSizeAfterInvalidation=_suggestedSizeAfterInvalidation - In the implementation block
@property (nonatomic,retain) id<SXComponentState> componentState;                           //@synthesize componentState=_componentState - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                   //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) NSDictionary * infoFromLayouting;                            //@synthesize infoFromLayouting=_infoFromLayouting - In the implementation block
@property (nonatomic,readonly) id<SXComponent> component;                                   //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) SXComponentSizer * componentSizer;                           //@synthesize componentSizer=_componentSizer - In the implementation block
@property (nonatomic,readonly) id<SXComponentLayout> componentLayout;                       //@synthesize componentLayout=_componentLayout - In the implementation block
@property (nonatomic,readonly) SXLayoutBlueprint * rootLayoutBlueprint; 
@property (assign,nonatomic) NSRange columnRange;                                           //@synthesize columnRange=_columnRange - In the implementation block
@property (nonatomic,readonly) BOOL hasValidLayout; 
@property (nonatomic,readonly) BOOL hasValidSize; 
@property (nonatomic,readonly) BOOL hasValidPosition; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                    //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInsets;                                     //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) CGRect absoluteFrame;                                          //@synthesize absoluteFrame=_absoluteFrame - In the implementation block
@property (assign,nonatomic) CGRect componentViewFrame;                                     //@synthesize componentViewFrame=_componentViewFrame - In the implementation block
@property (assign,nonatomic) CGRect contentViewFrame;                                       //@synthesize contentViewFrame=_contentViewFrame - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                           //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) CGRect backgroundViewFrame;                                    //@synthesize backgroundViewFrame=_backgroundViewFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)invalidateLayout;
-(CGRect)contentFrame;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(BOOL)isHidden;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setHidden:(BOOL)arg1 ;
-(NSRange)columnRange;
-(void)setColumnRange:(NSRange)arg1 ;
-(CGRect)frame;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(id)description;
-(id<SXComponent>)component;
-(void)setComponentState:(id<SXComponentState>)arg1 ;
-(id<SXComponentState>)componentState;
-(CGRect)absoluteFrame;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)contentViewFrame;
-(id<SXComponentLayout>)componentLayout;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
-(BOOL)hasValidLayout;
-(SXLayoutBlueprint *)rootLayoutBlueprint;
-(SXComponentSizer *)componentSizer;
-(CGSize)suggestedSizeAfterInvalidation;
-(BOOL)hasValidPosition;
-(BOOL)hasValidSize;
-(void)invalidateSize;
-(void)setComponentViewFrame:(CGRect)arg1 ;
-(void)setContentViewFrame:(CGRect)arg1 ;
-(void)setBackgroundViewFrame:(CGRect)arg1 ;
-(void)storeInformationForRenderingPhase:(id)arg1 ;
-(SXLayoutBlueprint *)parentLayoutBlueprint;
-(void)invalidatePosition;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentSizer:(id)arg3 ;
-(void)updateSize:(CGSize)arg1 ;
-(void)updatePosition:(CGPoint)arg1 ;
-(void)setParentLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
-(CGRect)componentViewFrame;
-(CGRect)backgroundViewFrame;
-(void)setSuggestedSizeAfterInvalidation:(CGSize)arg1 ;
-(NSDictionary *)infoFromLayouting;
@end

