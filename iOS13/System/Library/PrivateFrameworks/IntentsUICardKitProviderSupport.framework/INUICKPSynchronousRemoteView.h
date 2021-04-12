/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

#import <IntentsUICardKitProviderSupport/IntentsUICardKitProviderSupport-Structs.h>
#import <UIKitCore/UIView.h>

@protocol INUICKPSynchronousRemoteViewDelegate;
@interface INUICKPSynchronousRemoteView : UIView {

	id<INUICKPSynchronousRemoteViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INUICKPSynchronousRemoteViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<INUICKPSynchronousRemoteViewDelegate>)delegate;
-(void)setDelegate:(id<INUICKPSynchronousRemoteViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
@end

