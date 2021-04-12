/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPiOSCanvasViewController.h>

@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController {

	BOOL _selectionEnabled;

}

@property (assign,nonatomic) BOOL selectionEnabled;              //@synthesize selectionEnabled=_selectionEnabled - In the implementation block
-(void)dealloc;
-(void)loadView;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)selectAll:(id)arg1 ;
-(void)interactionDidEnd:(id)arg1 ;
-(BOOL)interactionShouldBegin:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)selectionEnabled;
-(void)setSelectionEnabled:(BOOL)arg1 ;
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3 ;
@end

