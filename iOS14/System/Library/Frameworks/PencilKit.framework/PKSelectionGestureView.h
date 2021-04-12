/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKSelectionInteraction, PKSelectionController;

@interface PKSelectionGestureView : UIView {

	PKSelectionInteraction* _selectionInteraction;
	PKSelectionController* _selectionController;

}

@property (nonatomic,retain) PKSelectionInteraction * selectionInteraction;                   //@synthesize selectionInteraction=_selectionInteraction - In the implementation block
@property (assign,nonatomic,__weak) PKSelectionController * selectionController;              //@synthesize selectionController=_selectionController - In the implementation block
-(PKSelectionController *)selectionController;
-(void)didMoveToWindow;
-(PKSelectionInteraction *)selectionInteraction;
-(void)setSelectionController:(PKSelectionController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 selectionController:(id)arg2 ;
-(void)setSelectionInteraction:(PKSelectionInteraction *)arg1 ;
@end

