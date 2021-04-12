/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIView * customViewForInteractiveHighlight;                                             //@synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight - In the implementation block
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(void)setDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)unregister;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(UIView *)customViewForInteractiveHighlight;
-(void)setCustomViewForInteractiveHighlight:(UIView *)arg1 ;
-(CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1 ;
-(id)initWithSourceView:(id)arg1 ;
@end

