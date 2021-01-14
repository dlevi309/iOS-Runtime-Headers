/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGSpriteIndexReferencing.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@protocol PXGAnchorDelegate;
@class PXGLayout, NSArray, NSDate, NSString;

@interface PXGAnchor : NSObject <PXGSpriteIndexReferencing, PXGDiagnosticsProvider> {

	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL _needsUpdate;
	BOOL _autoInvalidated;
	id<PXGAnchorDelegate> _delegate;
	id _context;
	PXGLayout* _layout;
	long long _type;
	long long _priority;
	NSArray* _spriteReferences;
	NSArray* _spriteRects;
	unsigned long long _referencingOptions;
	unsigned long long _edges;
	unsigned long long _scrollPosition;
	NSDate* _date;
	NSArray* _constraints;
	/*^block*/id _customOffset;
	CGSize _contentSize;
	CGPoint _visibleLocation;
	CGPoint _normalizedAnchorPoint;
	CGRect _visibleRect;
	UIEdgeInsets _padding;

}

@property (nonatomic,__weak,readonly) PXGLayout * layout;                                    //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long type;                                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long priority;                                             //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                             //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                             //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy) NSArray * spriteReferences;                                       //@synthesize spriteReferences=_spriteReferences - In the implementation block
@property (nonatomic,copy) NSArray * spriteRects;                                            //@synthesize spriteRects=_spriteRects - In the implementation block
@property (assign,nonatomic) unsigned long long referencingOptions;                          //@synthesize referencingOptions=_referencingOptions - In the implementation block
@property (assign,nonatomic) unsigned long long edges;                                       //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                           //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) unsigned long long scrollPosition;                              //@synthesize scrollPosition=_scrollPosition - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSArray * constraints;                                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) id customOffset;                                                  //@synthesize customOffset=_customOffset - In the implementation block
@property (assign,nonatomic) CGPoint visibleLocation;                                        //@synthesize visibleLocation=_visibleLocation - In the implementation block
@property (assign,nonatomic) CGPoint normalizedAnchorPoint;                                  //@synthesize normalizedAnchorPoint=_normalizedAnchorPoint - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                               //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (getter=isAutoInvalidated,nonatomic,readonly) BOOL autoInvalidated;                //@synthesize autoInvalidated=_autoInvalidated - In the implementation block
@property (nonatomic,readonly) unsigned long long anchoredContentEdges; 
@property (nonatomic,readonly) BOOL shouldFaultInContentAtAnchoredContentEdges; 
@property (nonatomic,readonly) BOOL isScrollingAnimationAnchor; 
@property (nonatomic,readonly) BOOL canBeReused; 
@property (assign,nonatomic,__weak) id<PXGAnchorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                                     //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
-(NSArray *)constraints;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(id)initWithLayout:(id)arg1 ;
-(unsigned long long)scrollPosition;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(BOOL)needsUpdate;
-(void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2 ;
-(void)setScrollPosition:(unsigned long long)arg1 ;
-(NSArray *)spriteReferences;
-(unsigned long long)referencingOptions;
-(CGRect)visibleRect;
-(id)init;
-(id)customOffset;
-(id<PXGAnchorDelegate>)delegate;
-(id)autoInvalidate;
-(CGSize)contentSize;
-(unsigned)anchoredSpriteIndexInLayout:(id)arg1 ;
-(void)setSpriteReferences:(NSArray *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)_enumerateSpriteConstraintsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithLayout:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)context;
-(unsigned long long)edges;
-(void)setReferencingOptions:(unsigned long long)arg1 ;
-(CGPoint)visibleLocation;
-(void)setDelegate:(id<PXGAnchorDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)diagnosticDescription;
-(void)setCustomOffset:(id)arg1 ;
-(void)setNormalizedAnchorPoint:(CGPoint)arg1 ;
-(void)setVisibleLocation:(CGPoint)arg1 ;
-(long long)type;
-(CGRect)adjustVisibleRect:(CGRect)arg1 ;
-(void)enumerateAllSpriteReferencesUsingBlock:(/*^block*/id)arg1 ;
-(void)setSpriteRects:(NSArray *)arg1 ;
-(void)enumerateSpritesWithEnumerationOptions:(unsigned long long)arg1 referencingOptions:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)invalidate;
-(UIEdgeInsets)padding;
-(CGPoint)normalizedAnchorPoint;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(NSDate *)date;
-(BOOL)canBeReused;
-(BOOL)isAutoInvalidated;
-(BOOL)isScrollingAnimationAnchor;
-(void)setEdges:(unsigned long long)arg1 ;
-(NSArray *)spriteRects;
-(long long)priority;
-(BOOL)shouldFaultInContentAtAnchoredContentEdges;
-(void)setPriority:(long long)arg1 ;
-(unsigned long long)anchoredContentEdges;
-(PXGLayout *)layout;
-(void)setContext:(id)arg1 ;
@end

