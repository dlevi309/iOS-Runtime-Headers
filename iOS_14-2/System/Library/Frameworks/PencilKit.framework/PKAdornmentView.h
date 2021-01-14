/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKSelectionRendering;
@class UIImageView, PKStrokeSelection, PKSelectionController, PKStrokeSelectionImage;

@interface PKAdornmentView : UIView {

	UIImageView* _strokeSelectionImageView;
	BOOL _isInteracting;
	PKStrokeSelection* _strokeSelection;
	PKSelectionController* _selectionController;
	id<PKSelectionRendering> _selectionRenderer;
	PKStrokeSelectionImage* _strokeSelectionImage;

}

@property (nonatomic,retain) PKStrokeSelection * strokeSelection;                             //@synthesize strokeSelection=_strokeSelection - In the implementation block
@property (assign,nonatomic,__weak) PKSelectionController * selectionController;              //@synthesize selectionController=_selectionController - In the implementation block
@property (nonatomic,retain) id<PKSelectionRendering> selectionRenderer;                      //@synthesize selectionRenderer=_selectionRenderer - In the implementation block
@property (nonatomic,retain) PKStrokeSelectionImage * strokeSelectionImage;                   //@synthesize strokeSelectionImage=_strokeSelectionImage - In the implementation block
+(Class)classForSelectionType:(long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(PKSelectionController *)selectionController;
-(id)initWithFrame:(CGRect)arg1 strokeSelection:(id)arg2 selectionController:(id)arg3 selectionType:(long long)arg4 ;
-(id<PKSelectionRendering>)selectionRenderer;
-(PKStrokeSelection *)strokeSelection;
-(BOOL)containsPoint:(CGPoint)arg1 forInputType:(long long)arg2 ;
-(void)_putStrokesBackIntoTiledViewAnimated:(BOOL)arg1 ;
-(void)_liftStrokesOutOfTiledView;
-(void)setSelectionController:(PKSelectionController *)arg1 ;
-(void)setStrokeSelection:(PKStrokeSelection *)arg1 ;
-(PKStrokeSelectionImage *)strokeSelectionImage;
-(void)setStrokeSelectionImage:(PKStrokeSelectionImage *)arg1 ;
-(void)_hideStrokeSelectionImageView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelectionRenderer:(id<PKSelectionRendering>)arg1 ;
@end

