/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKAdornmentView.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDragPreview, UILongPressGestureRecognizer, UITapGestureRecognizer, UIDragInteraction, NSString;

@interface PKSelectionView : PKAdornmentView <UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate> {

	UIDragPreview* _previewProvider;
	CGRect _originalStrokeFrame;
	CGPoint _initialDragPosition;
	double _initialRotation;
	double _rotation;
	double _scale;
	CGPoint _originalTranslation;
	double _startRotation;
	double _startScale;
	BOOL _hasTranscription;
	BOOL _menuVisible;
	/*^block*/id _finishDragToAttachmentBlock;
	BOOL _isDragging;
	BOOL _wantsDragPlatter;
	UILongPressGestureRecognizer* _dragGR;
	UITapGestureRecognizer* _editMenuGR;
	UITapGestureRecognizer* _doubleTapGR;
	UIDragInteraction* _dragInteraction;
	long long _selectionType;
	CGPoint _offsetInTouchView;
	CGAffineTransform _selectionDrawingTransform;
	CGAffineTransform _userTransform;

}

@property (assign,nonatomic) CGAffineTransform userTransform;                          //@synthesize userTransform=_userTransform - In the implementation block
@property (nonatomic,readonly) BOOL isDragging;                                        //@synthesize isDragging=_isDragging - In the implementation block
@property (nonatomic,readonly) CGPoint offsetInTouchView;                              //@synthesize offsetInTouchView=_offsetInTouchView - In the implementation block
@property (assign,nonatomic) CGAffineTransform selectionDrawingTransform;              //@synthesize selectionDrawingTransform=_selectionDrawingTransform - In the implementation block
@property (assign,nonatomic) BOOL wantsDragPlatter;                                    //@synthesize wantsDragPlatter=_wantsDragPlatter - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * dragGR;                  //@synthesize dragGR=_dragGR - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * editMenuGR;                    //@synthesize editMenuGR=_editMenuGR - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapGR;                   //@synthesize doubleTapGR=_doubleTapGR - In the implementation block
@property (nonatomic,readonly) UIDragInteraction * dragInteraction;                    //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (assign,nonatomic) long long selectionType;                                  //@synthesize selectionType=_selectionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)paste:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)keyCommands;
-(UIDragInteraction *)dragInteraction;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UILongPressGestureRecognizer *)dragGR;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(id)_accessibilityUserTestingChildren;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setSelectionType:(long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)isDragging;
-(long long)selectionType;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(long long)editingInteractionConfiguration;
-(void)_updateTransform;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)dealloc;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 strokeSelection:(id)arg2 selectionController:(id)arg3 selectionType:(long long)arg4 ;
-(void)toggleEditMenu;
-(void)didDoubleTap;
-(void)dragSelection:(id)arg1 ;
-(void)_setupWindowNotificationsForScene:(id)arg1 ;
-(void)_clearSelection:(id)arg1 ;
-(BOOL)lassoContainsPoint:(CGPoint)arg1 ;
-(void)duplicate:(id)arg1 ;
-(BOOL)supportsCopyAsText;
-(void)copyTranscription:(id)arg1 ;
-(void)insertSpace:(id)arg1 ;
-(void)setupShapeMenuSupport;
-(CGPoint)_insertSpacePositionForMenuController:(id)arg1 ;
-(BOOL)canConvertToShapeWithAction:(SEL)arg1 withSender:(id)arg2 handled:(BOOL*)arg3 ;
-(BOOL)containsPoint:(CGPoint)arg1 forInputType:(long long)arg2 ;
-(void)_dragWillBegin;
-(void)didBeginDraggingSelection;
-(void)didEndGestureWithTranslation:(CGPoint)arg1 transform:(CGAffineTransform)arg2 ;
-(void)_cleanupDragState;
-(void)_commitDragToAttachment;
-(void)setUserTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)userTransform;
-(id)_selectionViewGestures;
-(void)generateStrokeImageForPasteAndDND;
-(void)scaleSelection:(id)arg1 ;
-(void)rotateSelection:(id)arg1 ;
-(void)makeViewAliveAtLocation:(CGPoint)arg1 ;
-(void)animateViewToOriginalPosition;
-(void)updateLocationForDrop:(CGPoint)arg1 ;
-(void)_didAddNewAttachment;
-(void)_findTranscriptionWithCompletion:(/*^block*/id)arg1 ;
-(CGPoint)offsetInTouchView;
-(CGAffineTransform)selectionDrawingTransform;
-(void)setSelectionDrawingTransform:(CGAffineTransform)arg1 ;
-(BOOL)wantsDragPlatter;
-(void)setWantsDragPlatter:(BOOL)arg1 ;
-(UITapGestureRecognizer *)editMenuGR;
-(UITapGestureRecognizer *)doubleTapGR;
-(id)shapeSupportCache;
-(void)convertToShapes:(id)arg1 ;
@end

