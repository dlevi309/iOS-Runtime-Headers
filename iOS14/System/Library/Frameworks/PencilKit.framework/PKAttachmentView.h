/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKStrokeSpatialCacheDelegate.h>
#import <libobjc.A.dylib/PKRecognitionSessionManagerDelegate.h>
#import <libobjc.A.dylib/PKSelectionObserving.h>

@class NSUUID, PKDrawing, NSMutableDictionary, NSArray, UIView, PKStrokeSpatialCache, PKRecognitionSessionManager, NSString;

@interface PKAttachmentView : UIView <PKStrokeSpatialCacheDelegate, PKRecognitionSessionManagerDelegate, PKSelectionObserving> {

	NSUUID* _listenerID;
	BOOL _contentHidden;
	BOOL _wantsDataDetection;
	PKDrawing* _drawing;
	NSMutableDictionary* _tiles;
	NSMutableDictionary* _offscreenTiles;
	NSArray* _additionalStrokes;
	UIView* _tileContainerView;
	PKStrokeSpatialCache* _strokeSpatialCache;
	PKRecognitionSessionManager* _recognitionManager;
	CGRect _cachedBounds;

}

@property (assign,nonatomic) CGRect cachedBounds;                                           //@synthesize cachedBounds=_cachedBounds - In the implementation block
@property (nonatomic,retain) PKRecognitionSessionManager * recognitionManager;              //@synthesize recognitionManager=_recognitionManager - In the implementation block
@property (nonatomic,copy) PKDrawing * drawing;                                             //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tiles;                                 //@synthesize tiles=_tiles - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * offscreenTiles;                        //@synthesize offscreenTiles=_offscreenTiles - In the implementation block
@property (nonatomic,retain) NSArray * additionalStrokes;                                   //@synthesize additionalStrokes=_additionalStrokes - In the implementation block
@property (nonatomic,retain) UIView * tileContainerView;                                    //@synthesize tileContainerView=_tileContainerView - In the implementation block
@property (nonatomic,readonly) UIView * tileMaskView; 
@property (nonatomic,readonly) BOOL isAtEndOfDocument; 
@property (assign,nonatomic) BOOL contentHidden;                                            //@synthesize contentHidden=_contentHidden - In the implementation block
@property (nonatomic,readonly) double drawingScale; 
@property (nonatomic,readonly) PKStrokeSpatialCache * strokeSpatialCache;                   //@synthesize strokeSpatialCache=_strokeSpatialCache - In the implementation block
@property (assign,nonatomic) BOOL wantsDataDetection;                                       //@synthesize wantsDataDetection=_wantsDataDetection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRTL;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(PKDrawing *)drawing;
-(double)drawingScale;
-(NSMutableDictionary *)tiles;
-(BOOL)contentHidden;
-(void)dealloc;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(long long)contentTypeForIntersectedStrokes:(id)arg1 ;
-(void)fingerDrawingEnabledDidChange;
-(void)containingScrollViewDidScroll;
-(void)didBeginDrawing;
-(void)didEndDrawing;
-(void)drawingDidEraseStrokes;
-(BOOL)isAtEndOfDocument;
-(void)drawingDidChange;
-(void)setAttachmentChromeVisible:(BOOL)arg1 animated:(BOOL)arg2 highlightBackground:(BOOL)arg3 ;
-(void)updateDrawingHeight:(double)arg1 ;
-(void)visibleOnscreenBoundsDidChange:(CGRect)arg1 ;
-(void)updateFrameForTextContainer;
-(void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2 ;
-(UIView *)tileContainerView;
-(BOOL)hitByTouchLocation:(CGPoint)arg1 bounds:(CGRect)arg2 ;
-(BOOL)hitChrome:(CGPoint)arg1 isStylus:(BOOL)arg2 ;
-(id)dataDetectorViewAtPoint:(CGPoint)arg1 ;
-(UIView *)tileMaskView;
-(double)heightFromDrawing:(id)arg1 delta:(double)arg2 ;
-(void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(BOOL)arg2 ;
-(NSMutableDictionary *)offscreenTiles;
-(NSArray *)additionalStrokes;
-(BOOL)wantsFullyRendered;
-(void)fullyRendered;
-(BOOL)disableTileAnimations;
-(void)setAdditionalStrokes:(NSArray *)arg1 ;
-(PKStrokeSpatialCache *)strokeSpatialCache;
-(void)_initializeRecognitionForDrawingIfNecessary:(id)arg1 ;
-(PKRecognitionSessionManager *)recognitionManager;
-(void)_initializeRecognitionForDrawingIfNecessary:(id)arg1 withVisibleOnscreenStrokes:(id)arg2 ;
-(void)updateTileContainerViewFrame;
-(void)setRecognitionManager:(PKRecognitionSessionManager *)arg1 ;
-(void)setWantsDataDetection:(BOOL)arg1 ;
-(void)fetchIntersectedStrokesAtPoint:(CGPoint)arg1 selectionType:(long long)arg2 inputType:(long long)arg3 visibleOnscreenStrokes:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDataDetectorResults:(id)arg1 ;
-(void)didFinishCalculatingVisibleOnscreenStrokes:(id)arg1 ;
-(void)recognitionSessionManager:(id)arg1 foundDataDetectorItems:(id)arg2 ;
-(void)didBeginModifyDrawing;
-(void)didEndModifyDrawing;
-(id)initWithFrame:(CGRect)arg1 drawing:(id)arg2 ;
-(void)fetchIntersectedStrokesBetweenTopPoint:(CGPoint)arg1 bottomPoint:(CGPoint)arg2 liveScrollOffset:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(id)_firstStrokesInSelectedStrokes:(id)arg1 ;
-(id)_lastStrokesInSelectedStrokes:(id)arg1 ;
-(void)setTileContainerView:(UIView *)arg1 ;
-(BOOL)wantsDataDetection;
-(CGRect)cachedBounds;
-(void)setCachedBounds:(CGRect)arg1 ;
@end

