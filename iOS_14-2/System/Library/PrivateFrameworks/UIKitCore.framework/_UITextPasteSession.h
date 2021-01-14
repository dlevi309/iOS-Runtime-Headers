/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITextDropPasteSession.h>

@protocol UITextPasteSessionDelegate, _UITextPasteProgressSupport;
@class UITextPasteController, UITextPasteCoordinator, UITextRange, NSAttributedString, NSArray, NSString;

@interface _UITextPasteSession : NSObject <UITextDropPasteSession> {

	BOOL _animating;
	id<UITextPasteSessionDelegate> _delegate;
	UITextPasteController* _controller;
	UITextPasteCoordinator* _coordinator;
	UITextRange* _range;
	id<_UITextPasteProgressSupport> _progressSupport;
	NSAttributedString* _pasteResult;
	NSArray* _originalItems;
	UITextRange* _hiddenRange;

}

@property (assign,nonatomic,__weak) UITextPasteController * controller;                    //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UITextPasteCoordinator * coordinator;                         //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) UITextRange * range;                                          //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) id<_UITextPasteProgressSupport> progressSupport;              //@synthesize progressSupport=_progressSupport - In the implementation block
@property (nonatomic,retain) NSAttributedString * pasteResult;                             //@synthesize pasteResult=_pasteResult - In the implementation block
@property (nonatomic,copy) NSArray * originalItems;                                        //@synthesize originalItems=_originalItems - In the implementation block
@property (nonatomic,retain) UITextRange * hiddenRange;                                    //@synthesize hiddenRange=_hiddenRange - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating;                          //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic,__weak) id<UITextPasteSessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRange:(UITextRange *)arg1 ;
-(void)setCoordinator:(UITextPasteCoordinator *)arg1 ;
-(UITextRange *)range;
-(id<UITextPasteSessionDelegate>)delegate;
-(void)setProgressSupport:(id<_UITextPasteProgressSupport>)arg1 ;
-(void)setOriginalItems:(NSArray *)arg1 ;
-(void)animationStarted;
-(void)setPasteResult:(NSAttributedString *)arg1 ;
-(void)setHiddenRange:(UITextRange *)arg1 ;
-(id<_UITextPasteProgressSupport>)progressSupport;
-(void)setController:(UITextPasteController *)arg1 ;
-(void)setDelegate:(id<UITextPasteSessionDelegate>)arg1 ;
-(void)animationCompleted;
-(id)positionedPasteResult;
-(NSArray *)originalItems;
-(UITextPasteController *)controller;
-(BOOL)isAnimating;
-(NSAttributedString *)pasteResult;
-(UITextRange *)hiddenRange;
-(UITextPasteCoordinator *)coordinator;
@end

