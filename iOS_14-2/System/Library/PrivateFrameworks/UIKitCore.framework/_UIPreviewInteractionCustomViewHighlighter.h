/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3 ;
-(void)setCustomViewFlipsHorizontalAxis:(BOOL)arg1 ;
-(BOOL)customViewFlipsHorizontalAxis;
-(void)prepareHighlightWithPreviewingContext:(id)arg1 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg1 ;
-(UIView *)customView;
-(void)setCustomView:(UIView *)arg1 ;
@end

