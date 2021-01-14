/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIHighlightPlatterView.h>

@class _UIMorphingView;

@interface _UIAnchoredClickHighlightPlatterView : _UIHighlightPlatterView {

	_UIMorphingView* _anchorView;

}

@property (assign,nonatomic,__weak) _UIMorphingView * anchorView;              //@synthesize anchorView=_anchorView - In the implementation block
-(id)initWithTargetedPreview:(id)arg1 ;
-(void)deAnchor;
-(void)anchorToContainer;
-(void)setAnchorView:(_UIMorphingView *)arg1 ;
-(_UIMorphingView *)anchorView;
@end

