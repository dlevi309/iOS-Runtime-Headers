/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<PMPassthroughViewDelegate>)arg1 ;
@end

