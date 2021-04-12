/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol _UIPreviewActionSheetViewDelegate;
@class NSArray, NSString, UILongPressGestureRecognizer;

@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	id<_UIPreviewActionSheetViewDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSArray* _actions;
	NSString* _title;
	UILongPressGestureRecognizer* _captureTouchesRecognizer;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) NSArray * actions;                                                    //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * captureTouchesRecognizer;              //@synthesize captureTouchesRecognizer=_captureTouchesRecognizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewActionSheetViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<_UIPreviewActionSheetViewDelegate>)delegate;
-(void)setDelegate:(id<_UIPreviewActionSheetViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)actions;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_setupViewHierarchy;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 items:(id)arg3 contentInsets:(UIEdgeInsets)arg4 ;
-(void)_performActionForPreviewAction:(id)arg1 interfaceAction:(id)arg2 ;
-(void)setActions:(NSArray *)arg1 ;
-(UILongPressGestureRecognizer *)captureTouchesRecognizer;
-(void)setCaptureTouchesRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

