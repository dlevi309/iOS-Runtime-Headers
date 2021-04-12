/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKDrawing, NSMutableDictionary, NSArray, UIView;

@interface PKAttachmentView : UIView {

	BOOL _contentHidden;
	PKDrawing* _drawing;
	NSMutableDictionary* _tiles;
	NSMutableDictionary* _offscreenTiles;
	NSArray* _additionalStrokes;
	UIView* _tileContainerView;

}

@property (nonatomic,copy) PKDrawing * drawing;                                   //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tiles;                       //@synthesize tiles=_tiles - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * offscreenTiles;              //@synthesize offscreenTiles=_offscreenTiles - In the implementation block
@property (nonatomic,retain) NSArray * additionalStrokes;                         //@synthesize additionalStrokes=_additionalStrokes - In the implementation block
@property (nonatomic,retain) UIView * tileContainerView;                          //@synthesize tileContainerView=_tileContainerView - In the implementation block
@property (nonatomic,readonly) UIView * tileMaskView; 
@property (nonatomic,readonly) BOOL isAtEndOfDocument; 
@property (assign,nonatomic) BOOL contentHidden;                                  //@synthesize contentHidden=_contentHidden - In the implementation block
@property (nonatomic,readonly) double drawingScale; 
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentHidden:(BOOL)arg1 ;
-(double)drawingScale;
-(NSMutableDictionary *)tiles;
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)fingerDrawingEnabledDidChange;
-(void)drawingWillBegin;
-(void)drawingDidEraseStrokes;
-(BOOL)isAtEndOfDocument;
-(void)drawingDidChange;
-(void)updateDrawingHeight:(double)arg1 ;
-(void)updateFrameForTextContainer;
-(void)pixelAlignForContentScale:(double)arg1 enclosingScrollView:(id)arg2 ;
-(UIView *)tileContainerView;
-(BOOL)hitByTouchLocation:(CGPoint)arg1 bounds:(CGRect)arg2 ;
-(BOOL)hitChrome:(CGPoint)arg1 isStylus:(BOOL)arg2 ;
-(UIView *)tileMaskView;
-(double)heightFromDrawing:(id)arg1 delta:(double)arg2 ;
-(void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(BOOL)arg2 ;
-(NSMutableDictionary *)offscreenTiles;
-(NSArray *)additionalStrokes;
-(BOOL)wantsFullyRendered;
-(void)fullyRendered;
-(BOOL)disableTileAnimations;
-(void)setAdditionalStrokes:(NSArray *)arg1 ;
-(void)updateTileContainerViewFrame;
-(id)initWithFrame:(CGRect)arg1 drawing:(id)arg2 ;
-(void)setTileContainerView:(UIView *)arg1 ;
-(BOOL)contentHidden;
@end

