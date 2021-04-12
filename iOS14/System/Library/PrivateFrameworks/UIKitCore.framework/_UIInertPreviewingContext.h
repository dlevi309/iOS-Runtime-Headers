/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerPreviewing_Internal.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIGestureRecognizer, UIView, NSString;

@interface _UIInertPreviewingContext : NSObject <UIViewControllerPreviewing_Internal> {

	UIGestureRecognizer* _failureRelationshipGestureRecognizer;
	id<UIViewControllerPreviewingDelegate> _delegate;
	UIView* _customViewForInteractiveHighlight;
	UIView* _sourceView;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIView * sourceView;                                                                    //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewingDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * customViewForInteractiveHighlight;                                             //@synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregister;
-(id)initWithSourceView:(id)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(void)setDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(UIView *)customViewForInteractiveHighlight;
-(void)setCustomViewForInteractiveHighlight:(UIView *)arg1 ;
-(CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(CGRect)sourceRect;
@end

