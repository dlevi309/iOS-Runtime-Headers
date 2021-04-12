/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIView;

@interface ICHandwritingDebugWindow : UIWindow {

	BOOL _draggingWindow;
	BOOL _resizingWindow;
	UIView* _resizeTriangle;
	CGPoint _initialTouchLocation;

}

@property (assign,getter=isDraggingWindow,nonatomic) BOOL draggingWindow;                                 //@synthesize draggingWindow=_draggingWindow - In the implementation block
@property (assign,getter=isResizingWindow,nonatomic) BOOL resizingWindow;                                 //@synthesize resizingWindow=_resizingWindow - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchLocation;                                                //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
@property (nonatomic,retain) UIView * resizeTriangle;                                                     //@synthesize resizeTriangle=_resizeTriangle - In the implementation block
@property (assign,nonatomic,__weak) id<ICHandwritingDebugDelegate> handwritingDebugDelegate; 
+(CGRect)preferredFrame;
+(void)savePreferredFrame:(CGRect)arg1 ;
-(void)refresh;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)navigationController;
-(CGPoint)initialTouchLocation;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(void)sharedInit;
-(void)setResizeTriangle:(UIView *)arg1 ;
-(UIView *)resizeTriangle;
-(void)updateResizeTriangleFrame;
-(void)setDraggingWindow:(BOOL)arg1 ;
-(void)setResizingWindow:(BOOL)arg1 ;
-(BOOL)isDraggingWindow;
-(BOOL)isResizingWindow;
-(id)handwritingDebugViewController;
-(void)setHandwritingDebugDelegate:(id<ICHandwritingDebugDelegate>)arg1 ;
-(id<ICHandwritingDebugDelegate>)handwritingDebugDelegate;
@end

