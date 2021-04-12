/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIView.h>

@protocol EKLayoutContainerViewDelegate;
@interface EKLayoutContainerView : UIView {

	id<EKLayoutContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKLayoutContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<EKLayoutContainerViewDelegate>)delegate;
-(void)setDelegate:(id<EKLayoutContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
@end

