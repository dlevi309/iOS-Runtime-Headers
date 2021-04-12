/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)atomInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView*<_UIAtomTextViewAtomLayout>)delegateView;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegateView:(UIView*<_UIAtomTextViewAtomLayout>)arg1 ;
-(id)initWithDelegateView:(id)arg1 ;
-(CGRect)selectionBounds;
-(BOOL)isEnabled;
-(id)methodSignatureForSelector:(SEL)arg1 ;
@end

