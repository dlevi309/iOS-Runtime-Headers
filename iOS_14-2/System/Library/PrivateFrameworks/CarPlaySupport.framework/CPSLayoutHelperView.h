/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@protocol CPSLayoutHelperViewDelegate;
@interface CPSLayoutHelperView : UIView {

	id<CPSLayoutHelperViewDelegate> _layoutDelegate;

}

@property (assign,nonatomic,__weak) id<CPSLayoutHelperViewDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(id<CPSLayoutHelperViewDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<CPSLayoutHelperViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
@end

