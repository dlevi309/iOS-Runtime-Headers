/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKTextInputContainerViewDelegate;
@interface PKTContainerView : UIView {

	id<PKTextInputContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKTextInputContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKTextInputContainerViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<PKTextInputContainerViewDelegate>)arg1 ;
@end

