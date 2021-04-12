/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISplittableInputView.h>
#import <UIKitCore/_UIRemoteKeyboardInputViewPlaceholder.h>

@class UIView, NSString;

@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {

	UIView* _mirroredView;
	CGSize _fixedSize;
	/*^block*/id _sizeBlock;
	UIView* _fallbackView;
	UIView* _associatedView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView;                 //@synthesize fallbackView=_fallbackView - In the implementation block
@property (nonatomic,retain) UIView * associatedView;               //@synthesize associatedView=_associatedView - In the implementation block
+(id)placeholderWithSizer:(/*^block*/id)arg1 ;
+(id)placeholderWithWidth:(double)arg1 height:(double)arg2 ;
+(id)placeholderForView:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutMergedSubviews;
-(void)updateMergedSubviewConstraints;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)willBeginSplitTransition;
-(void)didEndSplitTransition;
-(void)_isPlaceholderViewSelector;
-(CGRect)_compatibleBounds;
-(CGSize)leftContentViewSize;
-(CGSize)rightContentViewSize;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(UIView *)placeheldView;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(UIView *)associatedView;
-(void)setFallbackView:(UIView *)arg1 ;
-(void)setAssociatedView:(UIView *)arg1 ;
-(BOOL)refreshPlaceholder;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1 ;
-(UIView *)fallbackView;
@end

