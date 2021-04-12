/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDInteractiveCanvasController.h>
#import <TSReading/TSDGestureTarget.h>

@class NSString;

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController <TSDGestureTarget> {

	BOOL _isTearingDown;

}

@property (nonatomic,readonly) BOOL shouldRespondToTextHyperlinks; 
@property (nonatomic,readonly) BOOL handleHyperlinksWithTextGRs; 
@property (nonatomic,readonly) BOOL isEditingText; 
@property (nonatomic,readonly) BOOL isTearingDown;                              //@synthesize isTearingDown=_isTearingDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)teardown;
-(BOOL)isEditingText;
-(BOOL)handleGesture:(id)arg1 ;
-(id)beginEditingRepForInfo:(id)arg1 ;
-(void)didBeginEditingText;
-(id)closestRepToPoint:(CGPoint)arg1 forStorage:(id)arg2 ;
-(CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2 ;
-(BOOL)showsComments;
-(void)setShowsComments:(BOOL)arg1 ;
-(BOOL)canHandleGesture:(id)arg1 ;
-(void)gestureSequenceWillBegin;
-(void)gestureSequenceDidEnd;
-(id)infosToHideForCanvas:(id)arg1 ;
-(void)resumeEditing;
-(id)p_beginEditingPossibleContainedRep:(id*)arg1 ;
-(BOOL)handleHyperlinksWithTextGRs;
-(BOOL)shouldRespondToTextHyperlinks;
-(void)p_recursivelyAddRep:(id)arg1 forStorage:(id)arg2 toSet:(id)arg3 ;
-(id)p_repsForStorage:(id)arg1 ;
-(id)_repsForStorage:(id)arg1 ;
-(void)withLayoutForModel:(id)arg1 withSelection:(id)arg2 performBlock:(/*^block*/id)arg3 ;
-(void)willEndEditingText;
-(BOOL)suppressDoubleTapForSelection;
-(BOOL)textRepsShouldTileAggressively;
-(id)closestRepToPoint:(CGPoint)arg1 ;
-(BOOL)zoomColumnAtPoint:(CGPoint)arg1 ;
-(void)showHyperlinkInfoForField:(id)arg1 inRep:(id)arg2 openInEditMode:(BOOL)arg3 ;
-(void)closeHyperlinkPopover;
-(BOOL)hyperlinkPopoverIsShown;
-(BOOL)cellCommentsAllowedForTableInfo:(id)arg1 ;
-(BOOL)isTearingDown;
@end

