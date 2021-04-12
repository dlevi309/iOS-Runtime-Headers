/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SXComponent, SXComponentLayout;
@class SXComponentSizer, SXLayoutBlueprint, NSDictionary;

@interface SXComponentBlueprint : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasValidSize;
	BOOL _hasValidPosition;
	BOOL _hidden;
	id<SXComponent> _component;
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

@property (assign,nonatomic) CGRect frame;                                                  //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL hasValidSize;                                             //@synthesize hasValidSize=_hasValidSize - In the implementation block
@property (assign,nonatomic) BOOL hasValidPosition;                                         //@synthesize hasValidPosition=_hasValidPosition - In the implementation block
@property (assign,nonatomic,__weak) SXLayoutBlueprint * parentLayoutBlueprint;              //@synthesize parentLayoutBlueprint=_parentLayoutBlueprint - In the implementation block
@property (assign,nonatomic) CGSize suggestedSizeAfterInvalidation;                         //@synthesize suggestedSizeAfterInvalidation=_suggestedSizeAfterInvalidation - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                   //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) NSDictionary * infoFromLayouting;                            //@synthesize infoFromLayouting=_infoFromLayouting - In the implementation block
@property (nonatomic,readonly) id<SXComponent> component;                                   //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) SXComponentSizer * componentSizer;                           //@synthesize componentSizer=_componentSizer - In the implementation block
@property (nonatomic,readonly) id<SXComponentLayout> componentLayout;                       //@synthesize componentLayout=_componentLayout - In the implementation block
@property (nonatomic,readonly) SXLayoutBlueprint * rootLayoutBlueprint; 
@property (assign,nonatomic) NSRange columnRange;                                           //@synthesize columnRange=_columnRange - In the implementation block
@property (nonatomic,readonly) BOOL hasValidLayout; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                    //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInsets;                                     //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) CGRect absoluteFrame;                                          //@synthesize absoluteFrame=_absoluteFrame - In the implementation block
@property (assign,nonatomic) CGRect componentViewFrame;                                     //@synthesize componentViewFrame=_componentViewFrame - In the implementation block
@property (assign,nonatomic) CGRect contentViewFrame;                                       //@synthesize contentViewFrame=_contentViewFrame - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                           //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) CGRect backgroundViewFrame;                                    //@synthesize backgroundViewFrame=_backgroundViewFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(CGRect)contentFrame;
-(CGRect)frame;
-(void)invalidateLayout;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(CGRect)absoluteFrame;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(id<SXComponent>)component;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
-(CGRect)contentViewFrame;
-(NSRange)columnRange;
-(void)setColumnRange:(NSRange)arg1 ;
-(id<SXComponentLayout>)componentLayout;
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
-(void)setHasValidPosition:(BOOL)arg1 ;
-(void)setHasValidSize:(BOOL)arg1 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentSizer:(id)arg3 ;
-(void)updateSize:(CGSize)arg1 ;
-(void)updatePosition:(CGPoint)arg1 ;
-(void)setParentLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
-(CGRect)componentViewFrame;
-(CGRect)backgroundViewFrame;
-(void)setSuggestedSizeAfterInvalidation:(CGSize)arg1 ;
-(NSDictionary *)infoFromLayouting;
@end

