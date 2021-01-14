/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(CGRect)_compatibleBounds;
-(id)initWithSize:(CGSize)arg1 ;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)rightContentViewSize;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)willBeginSplitTransition;
-(NSString *)description;
-(void)layoutMergedSubviews;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)updateMergedSubviewConstraints;
-(void)setAssociatedView:(UIView *)arg1 ;
-(CGSize)leftContentViewSize;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(BOOL)refreshPlaceholder;
-(void)setFallbackView:(UIView *)arg1 ;
-(UIView *)fallbackView;
-(void)didEndSplitTransition;
-(UIView *)associatedView;
-(UIView *)placeheldView;
-(CGSize)fixedSize;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_isPlaceholderViewSelector;
@end

