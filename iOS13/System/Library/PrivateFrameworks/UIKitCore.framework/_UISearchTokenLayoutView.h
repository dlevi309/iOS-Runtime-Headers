/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIAtomTextViewAtomLayout;
@class UIView;

@interface _UISearchTokenLayoutView : UIView {

	UIView*<_UIAtomTextViewAtomLayout> _delegateView;

}

@property (nonatomic,readonly) UIEdgeInsets atomInsets; 
@property (nonatomic,retain) UIView*<_UIAtomTextViewAtomLayout> delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
+(id)layoutViewWithDelegateView:(id)arg1 ;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)viewForLastBaselineLayout;
-(UIView*<_UIAtomTextViewAtomLayout>)delegateView;
-(CGRect)selectionBounds;
-(id)initWithDelegateView:(id)arg1 ;
-(CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(UIEdgeInsets)atomInsets;
-(void)setDelegateView:(UIView*<_UIAtomTextViewAtomLayout>)arg1 ;
@end

