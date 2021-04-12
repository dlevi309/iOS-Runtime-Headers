/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPiOSCanvasViewController.h>

@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController {

	BOOL _selectionEnabled;

}

@property (assign,nonatomic) BOOL selectionEnabled;              //@synthesize selectionEnabled=_selectionEnabled - In the implementation block
-(long long)overrideUserInterfaceStyle;
-(void)selectAll:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)selectionEnabled;
-(BOOL)canBecomeFirstResponder;
-(void)setSelectionEnabled:(BOOL)arg1 ;
-(void)interactionDidEnd:(id)arg1 ;
-(void)loadView;
-(BOOL)interactionShouldBegin:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)dealloc;
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3 ;
@end

