/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/SwiftUI-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@interface SwiftUI.HostingScrollView : UIScrollView <UIScrollViewDelegate> {

	 viewType;
	 state;
	 host;
	 responder;
	 layoutDirection;
	 ignoreUpdates;
	 pendingUpdate;
	 animationTarget;
	 animationOffset;
	 isAnimationCompletionCheckPending;
	 configuration;

}

@property (assign,nonatomic) CGRect bounds; 
@property (readonly,nonatomic) UIEdgeInsets safeAreaInsets; 
-(CGRect)bounds;
-(UIEdgeInsets)safeAreaInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)adjustedContentInsetDidChange;
-(id)initWithCoder:(id)arg1 ;
@end

