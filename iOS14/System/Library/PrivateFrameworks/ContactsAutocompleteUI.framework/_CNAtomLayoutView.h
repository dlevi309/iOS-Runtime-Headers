/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CNAtomTextViewAtomLayout;
@class UIView;

@interface _CNAtomLayoutView : UIView {

	UIView*<CNAtomTextViewAtomLayout> _delegateView;

}

@property (nonatomic,readonly) UIEdgeInsets atomInsets; 
@property (nonatomic,retain) UIView*<CNAtomTextViewAtomLayout> delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
+(id)layoutViewWithDelegateView:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setMaskBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)atomInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView*<CNAtomTextViewAtomLayout>)delegateView;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegateView:(UIView*<CNAtomTextViewAtomLayout>)arg1 ;
-(id)initWithDelegateView:(id)arg1 ;
-(CGRect)selectionBounds;
-(id)methodSignatureForSelector:(SEL)arg1 ;
@end

