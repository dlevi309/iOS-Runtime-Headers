/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)reset;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)contentFrame;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(UIScrollView *)view;
-(long long)interfaceOrientation;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(CGSize)documentSize;
-(void)setGroupChanges:(BOOL)arg1 ;
-(BOOL)groupChanges;
-(void)setDocumentSize:(CGSize)arg1 ;
-(BOOL)isPopulated;
-(void)addViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2 ;
-(void)setAppearState:(unsigned long long)arg1 ;
-(unsigned long long)appearState;
-(CGRect)dynamicBounds;
-(void)setDynamicBounds:(CGRect)arg1 ;
-(CGRect)convertRectToViewportCoordinateSpace:(CGRect)arg1 fromView:(id)arg2 ;
-(void)removeViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2 ;
-(NSHashTable *)dynamicBoundsListeners;
-(NSHashTable *)boundsListeners;
-(NSHashTable *)appearStateListeners;
-(NSHashTable *)documentSizeListeners;
-(NSHashTable *)contentFrameListeners;
-(NSHashTable *)interfaceOrientationListeners;
-(SXViewport *)viewportBeforeUpdates;
-(void)setViewportBeforeUpdates:(SXViewport *)arg1 ;
-(void)dynamicBoundsDidChangeFromBounds:(CGRect)arg1 ;
-(void)boundsDidChangeFromBounds:(CGRect)arg1 ;
-(void)appearStateChangedFromState:(unsigned long long)arg1 ;
-(void)documentSizeDidChangeFromSize:(CGSize)arg1 ;
-(void)interfaceOrientationChangedFromOrientation:(long long)arg1 ;
-(void)contentFrameDidChangeFromFrame:(CGRect)arg1 ;
-(id)stringForAppearState:(unsigned long long)arg1 ;
-(id)stringFroInterfaceOrientation:(long long)arg1 ;
-(id)debugDescriptionForViewport:(id)arg1 ;
-(CGPoint)convertPointToViewportCoordinateSpace:(CGPoint)arg1 fromView:(id)arg2 ;
-(void)setDynamicBoundsListeners:(NSHashTable *)arg1 ;
-(void)setBoundsListeners:(NSHashTable *)arg1 ;
-(void)setAppearStateListeners:(NSHashTable *)arg1 ;
-(void)setDocumentSizeListeners:(NSHashTable *)arg1 ;
-(void)setContentFrameListeners:(NSHashTable *)arg1 ;
-(void)setInterfaceOrientationListeners:(NSHashTable *)arg1 ;
@end

