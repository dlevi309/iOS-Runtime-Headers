/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CSTouchPassThroughContainerViewDelegate;
@interface CSTouchPassThroughContainerView : UIView {

	id<CSTouchPassThroughContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSTouchPassThroughContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSTouchPassThroughContainerViewDelegate>)delegate;
-(void)setDelegate:(id<CSTouchPassThroughContainerViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

