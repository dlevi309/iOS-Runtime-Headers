/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <UIKitCore/UIView.h>

@protocol LPComponentViewDelegate;
@interface LPComponentView : UIView {

	id<LPComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<LPComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutComponentView;
-(id)init;
-(id<LPComponentViewDelegate>)delegate;
-(BOOL)isFlipped;
-(void)componentViewDidMoveToWindow;
-(BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg1 ;
-(void)setDelegate:(id<LPComponentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

