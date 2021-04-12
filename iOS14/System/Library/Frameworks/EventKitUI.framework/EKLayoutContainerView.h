/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

