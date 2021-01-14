/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActions:(NSArray *)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)actions;
-(void)setCompletionHandler:(id)arg1 ;
-(id<_UIPreviewActionSheetViewDelegate>)delegate;
-(UIEdgeInsets)contentInsets;
-(void)setTitle:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setDelegate:(id<_UIPreviewActionSheetViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 items:(id)arg3 contentInsets:(UIEdgeInsets)arg4 ;
-(void)_performActionForPreviewAction:(id)arg1 interfaceAction:(id)arg2 ;
-(UILongPressGestureRecognizer *)captureTouchesRecognizer;
-(void)setCaptureTouchesRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setupViewHierarchy;
-(NSString *)title;
@end

