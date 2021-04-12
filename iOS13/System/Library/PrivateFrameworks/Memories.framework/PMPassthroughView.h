/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PMPassthroughViewDelegate;
@interface PMPassthroughView : UIView {

	id<PMPassthroughViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PMPassthroughViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PMPassthroughViewDelegate>)delegate;
-(void)setDelegate:(id<PMPassthroughViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

