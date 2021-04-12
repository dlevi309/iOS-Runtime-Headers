/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@protocol CPSLayoutHelperViewDelegate;
@interface CPSLayoutHelperView : UIView {

	id<CPSLayoutHelperViewDelegate> _layoutDelegate;

}

@property (assign,nonatomic,__weak) id<CPSLayoutHelperViewDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setLayoutDelegate:(id<CPSLayoutHelperViewDelegate>)arg1 ;
-(id<CPSLayoutHelperViewDelegate>)layoutDelegate;
@end

