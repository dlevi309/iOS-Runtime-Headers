/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSHashTable, UIScrollView;

@interface SXViewport : NSObject {

	BOOL _groupChanges;
	unsigned long long _appearState;
	long long _interfaceOrientation;
	NSHashTable* _dynamicBoundsListeners;
	NSHashTable* _boundsListeners;
	NSHashTable* _appearStateListeners;
	NSHashTable* _documentSizeListeners;
	NSHashTable* _contentFrameListeners;
	NSHashTable* _interfaceOrientationListeners;
	SXViewport* _viewportBeforeUpdates;
	UIScrollView* _view;
	CGSize _documentSize;
	CGRect _bounds;
	CGRect _dynamicBounds;
	CGRect _contentFrame;

}

@property (nonatomic,retain) NSHashTable * dynamicBoundsListeners;                     //@synthesize dynamicBoundsListeners=_dynamicBoundsListeners - In the implementation block
@property (nonatomic,retain) NSHashTable * boundsListeners;                            //@synthesize boundsListeners=_boundsListeners - In the implementation block
@property (nonatomic,retain) NSHashTable * appearStateListeners;                       //@synthesize appearStateListeners=_appearStateListeners - In the implementation block
@property (nonatomic,retain) NSHashTable * documentSizeListeners;                      //@synthesize documentSizeListeners=_documentSizeListeners - In the implementation block
@property (nonatomic,retain) NSHashTable * contentFrameListeners;                      //@synthesize contentFrameListeners=_contentFrameListeners - In the implementation block
@property (nonatomic,retain) NSHashTable * interfaceOrientationListeners;              //@synthesize interfaceOrientationListeners=_interfaceOrientationListeners - In the implementation block
@property (nonatomic,retain) SXViewport * viewportBeforeUpdates;                       //@synthesize viewportBeforeUpdates=_viewportBeforeUpdates - In the implementation block
@property (assign,nonatomic) BOOL groupChanges;                                        //@synthesize groupChanges=_groupChanges - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * view;                             //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) CGRect dynamicBounds;                                     //@synthesize dynamicBounds=_dynamicBounds - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                            //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) unsigned long long appearState;                           //@synthesize appearState=_appearState - In the implementation block
@property (assign,nonatomic) CGSize documentSize;                                      //@synthesize documentSize=_documentSize - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                      //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) BOOL isPopulated; 
-(void)beginUpdates;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(CGRect)contentFrame;
-(CGRect)bounds;
-(void)endUpdates;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(void)documentSizeDidChangeFromSize:(CGSize)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)setGroupChanges:(BOOL)arg1 ;
-(NSHashTable *)dynamicBoundsListeners;
-(void)setDocumentSize:(CGSize)arg1 ;
-(void)setBoundsListeners:(NSHashTable *)arg1 ;
-(NSHashTable *)appearStateListeners;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)stringFroInterfaceOrientation:(long long)arg1 ;
-(BOOL)groupChanges;
-(void)setBounds:(CGRect)arg1 ;
-(NSHashTable *)interfaceOrientationListeners;
-(NSHashTable *)boundsListeners;
-(id)description;
-(void)addViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2 ;
-(void)setViewportBeforeUpdates:(SXViewport *)arg1 ;
-(UIScrollView *)view;
-(long long)interfaceOrientation;
-(void)contentFrameDidChangeFromFrame:(CGRect)arg1 ;
-(void)setAppearState:(unsigned long long)arg1 ;
-(id)stringForAppearState:(unsigned long long)arg1 ;
-(CGPoint)convertPointToViewportCoordinateSpace:(CGPoint)arg1 fromView:(id)arg2 ;
-(CGSize)documentSize;
-(void)setDocumentSizeListeners:(NSHashTable *)arg1 ;
-(void)reset;
-(void)setDynamicBounds:(CGRect)arg1 ;
-(void)dynamicBoundsDidChangeFromBounds:(CGRect)arg1 ;
-(void)setDynamicBoundsListeners:(NSHashTable *)arg1 ;
-(NSHashTable *)documentSizeListeners;
-(CGRect)dynamicBounds;
-(id)debugDescriptionForViewport:(id)arg1 ;
-(SXViewport *)viewportBeforeUpdates;
-(BOOL)isPopulated;
-(void)setAppearStateListeners:(NSHashTable *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)setInterfaceOrientationListeners:(NSHashTable *)arg1 ;
-(void)boundsDidChangeFromBounds:(CGRect)arg1 ;
-(unsigned long long)appearState;
-(void)removeViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2 ;
-(void)appearStateChangedFromState:(unsigned long long)arg1 ;
-(CGRect)convertRectToViewportCoordinateSpace:(CGRect)arg1 fromView:(id)arg2 ;
-(NSHashTable *)contentFrameListeners;
-(void)setContentFrameListeners:(NSHashTable *)arg1 ;
-(void)interfaceOrientationChangedFromOrientation:(long long)arg1 ;
@end

