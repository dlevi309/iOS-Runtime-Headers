/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIPreviewInteractionHighlighting.h>

@class UIView, NSString;

@interface _UIPreviewInteractionCustomViewHighlighter : NSObject <_UIPreviewInteractionHighlighting> {

	BOOL _customViewFlipsHorizontalAxis;
	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                             //@synthesize customView=_customView - In the implementation block
@property (assign,nonatomic) BOOL customViewFlipsHorizontalAxis;              //@synthesize customViewFlipsHorizontalAxis=_customViewFlipsHorizontalAxis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCustomView:(UIView *)arg1 ;
-(UIView *)customView;
-(id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3 ;
-(void)setCustomViewFlipsHorizontalAxis:(BOOL)arg1 ;
-(BOOL)customViewFlipsHorizontalAxis;
-(void)prepareHighlightWithPreviewingContext:(id)arg1 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg1 ;
@end

