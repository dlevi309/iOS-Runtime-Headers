/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <UIKitCore/UIButton.h>

@protocol CPSHighlightable;
@interface CPSHighlightForwardingButton : UIButton {

	id<CPSHighlightable> _highlightForwardingTarget;

}

@property (assign,nonatomic,__weak) id<CPSHighlightable> highlightForwardingTarget;              //@synthesize highlightForwardingTarget=_highlightForwardingTarget - In the implementation block
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlightForwardingTarget:(id<CPSHighlightable>)arg1 ;
-(id<CPSHighlightable>)highlightForwardingTarget;
@end

